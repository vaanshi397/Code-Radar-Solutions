// Your code here...
#include <stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d * %d = %d",N,i,N*i);
    }
    return 0;
}