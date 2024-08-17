#include <stdio.h>

int main()
{
    int a[] = {11,18,26,27,39,57,63,75,76,80};
    int low,high,mid,key;
    low = 0;
    high = 9;
    
    scanf("%d", &key);
    printf("key:%d\n",key);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if(a[mid] == key)
            printf("%d에서 탐색성공\n", mid);
            if(a[mid] >= key)
                high = mid - 1;
            else
                low = mid + 1;
    }
}