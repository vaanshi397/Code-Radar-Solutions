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
    int a;
    scanf("%d",&a);
    if(a==0)
    printf("Zero");
    else if(a>0)
    printf("Positive");
    else
    printf("Negative");
    return 0;
}