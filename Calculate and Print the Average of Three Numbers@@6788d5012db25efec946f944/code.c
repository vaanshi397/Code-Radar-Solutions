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
    float avg;
    avg=(float)(a+b+c)/3;
    printf("Average: %.2f",avg);
    return 0;
}