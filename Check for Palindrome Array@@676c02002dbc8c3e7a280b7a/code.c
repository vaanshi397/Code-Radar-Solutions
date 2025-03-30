#include <stdio.h>
void palindrome(int arr[],int N){
    int i=0;
    int j=N-1;
    while(i<j){
        if (arr[i]!=arr[j]){
            printf("NO");
            return;
        }
        i++;
        j--;
    }
    printf("YES");
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    palindrome(arr,N);
    return 0;
}