#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* test 1 */
    int arr[5] = {10,20,30,40,50};
    int *p = arr;
    
    printf("%d ", *p);
    printf("%d ", *p++);
    printf("%d ", (*p)++);
    printf("%d ", *(p++)); //왜 21이 나오지?, p++먼저 해서 p의 주소값을 하나 올리고 그 값을 출력하니까 30 아닌가?

    printf("%d ", *p);
    printf("\n\n");

    // 10
    // 10
    // 20
    // 21
    // 30
    
    /* test 2 */
    int arr1[5] = {11,20,30,40,50};
    int *p = arr1;
    
    printf("%d ", *p);
    printf("%d ", ++*p);
    printf("%d ", ++(*p));
    printf("%d ", *(++p));
    printf("%d ", *++p);
    printf("%d ", *p);
    printf("\n\n");

    // 10
    // 11   
    // 12
    // 20
    // 30
    // 30

    
    /* test 3 */
    int *arr2 = (int *)malloc(sizeof(int)*5);
    arr2 = arr1;
    *++arr2;

    // 
    
    /* test 4 */
    int arr3[5] = {10,20,30,40,50};
    *arr3++;    //error
    *++arr3;    //error
    
    /* test 5 */
    int a1 = 5;
    int a2 = 5;
    printf("%d ", a1++);
    printf("%d ", ++a2);
    
}