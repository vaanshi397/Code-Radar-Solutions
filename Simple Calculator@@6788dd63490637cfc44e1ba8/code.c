// Your code here...
#include <stdio.h>
int main()
{
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if (c=='/' && b==0)
    printf("error");
    else
    switch(c){
        case '+':
        printf("%.0f",a+b);
        break;
        case '-':
        printf("%.0f",a-b);
        break;
        case '*':
        printf("%.0f",a*b);
        break;
        case '/':
        if (b!=0){
        printf("%.0f",a/b);}
        break;
        default:
        printf("error");
        break;
    }
    return 0;
}