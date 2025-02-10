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
    if(isupper(a))
    printf("Uppercase");
    else if(islower(a))
    printf("Lowercase");
    return 0;
}