// Your code here...
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail");
        break;
        default:
        printf("Invalid Grade");
        break;
    }
    return 0;
}