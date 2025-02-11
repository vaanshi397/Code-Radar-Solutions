// #include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

// int main() {
//     printf("%s", welcome());
//     return 0;
// }
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
    c=pow(b,2);
    if(a==c)
    printf("Yes");
    else
    printf("No");
    return 0;
}