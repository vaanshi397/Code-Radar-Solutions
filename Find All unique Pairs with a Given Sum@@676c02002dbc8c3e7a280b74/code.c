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
        for(int j=i+1;j<N;j++){
            if(arr[i]+arr[j]==T){
                printf("%d %d\n",arr[i],arr[j]);
                found=1;
            }
        }
    }
    if(!found){
        printf("pairs not found");
    }
    return 0;
}