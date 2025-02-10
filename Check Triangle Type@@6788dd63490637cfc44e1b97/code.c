// #include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

// int main() {
//     printf("%s", welcome());
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && a==c)
    printf("Equilateral");
    else if((a==b && a==c) || (b==a && b==c) || (c==a && c==b))
    printf("Isosceles");
    else
    printf("Scalene");
    return 0;
}