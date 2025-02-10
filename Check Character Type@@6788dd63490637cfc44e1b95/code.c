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
    char cha;
    scanf("%c",&cha);
    if(cha=='a' || cha=='e' || cha=='i' || cha=='o' || cha=='u' || cha=='A' || cha=='E' || cha=='I' || cha=='O'|| cha=='U')
    printf("Vowel");
    else if( (cha>='A' && cha<='Z') || (cha>='a' && cha<='z'))
    printf("Consonant");
    else if(cha>='0' && cha<='9')
    printf("Digit");
    else
    printf("Special Character");
    return 0;
}