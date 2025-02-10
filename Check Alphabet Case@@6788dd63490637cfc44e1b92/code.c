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
    char a;
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    printf("Uppercase");
    else if (a>='a' && a<='z')
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}