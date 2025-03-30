#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=N-1;j>=0;j--){
            if (arr[i]=arr[j]){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
    }
    return 0;
}