// Your code here...
#include <stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",N,i,N*i);
    }
    return 0;
}