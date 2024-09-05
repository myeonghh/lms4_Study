#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void error_handling(char *message);

int main(int argc, char *argv[])
{
	int serv_sock;
	int clnt_sock;

	struct sockaddr_in serv_addr; // 서버 주소 구조체
	struct sockaddr_in clnt_addr; // accept 이후 서버 주소 구조체와 클라이언트 주소 구조체를 합친 구조체
	socklen_t clnt_addr_size;

	char message[]="Hello World!";
	
	if(argc!=2){
		printf("Usage : %s <port>\n", argv[0]); // 매개변수가 2개 들어오지 않으면 실행
		exit(1);
	}
	
	serv_sock=socket(PF_INET, SOCK_STREAM, 0);
	if(serv_sock == -1)
		error_handling("socket() error"); // 소켓 실패시 -1을 반환하기 때문에 -1일시 오류 코드 출력
	
	memset(&serv_addr, 0, sizeof(serv_addr)); // 서버 구조체 초기화 함수
	serv_addr.sin_family=AF_INET;
	serv_addr.sin_addr.s_addr=htonl(INADDR_ANY);
	serv_addr.sin_port=htons(atoi(argv[1])); // => 서버의 ip 와 port 구조체 입력
	
	if(bind(serv_sock, (struct sockaddr*) &serv_addr, sizeof(serv_addr))==-1 ) // 내가 입력한 ip와 port를 묶어주는 역할 => bind 함수
		error_handling("bind() error"); 
	
	if(listen(serv_sock, 5)==-1) // 소켓을 만들고 그 소켓안에 서버의 ip와 port를 입력시켜 놓고 클라이언트의 요청이 올때까지 대기하는 상태 
		error_handling("listen() error");
	
	clnt_addr_size=sizeof(clnt_addr);  
	clnt_sock=accept(serv_sock, (struct sockaddr*)&clnt_addr,&clnt_addr_size); // 클라이언트에서 요청이 왔을때 수락후 클라이언트 ip와 port를 서버의 ip와 port를 합쳐서 소켓 다시 생성
	if(clnt_sock==-1)
		error_handling("accept() error");  
	
	write(clnt_sock, message, sizeof(message));  // 클라이언트에게 메시지를 보냄
	close(clnt_sock);	
	close(serv_sock);
	return 0;
}

void error_handling(char *message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}
