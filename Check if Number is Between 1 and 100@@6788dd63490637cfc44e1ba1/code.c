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
    if(1<=a<=100)
    printf("In Range");
    else
    printf("Out of Range");
    return 0;
}