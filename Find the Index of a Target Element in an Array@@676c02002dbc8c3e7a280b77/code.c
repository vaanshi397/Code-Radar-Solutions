#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    int found=0;
    for(int i=0;i<N;i++){
        if(arr[i]==T){
            printf("%d",i);
            found=1;
            break;
        }
    }
    if(!found){
        printf("-1");
    }
    return 0;
}