#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        for(int j=1;j<N+i;j++){
            if(arr[j]<arr[j+1]){
                printf("Sorted");
            }
            else{
                printf("Not Sorted");
            }
        }
    }
    return 0;
}