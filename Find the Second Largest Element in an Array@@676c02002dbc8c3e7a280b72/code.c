#include <stdio.h>
#include <limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int  arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<N;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    for(int i=0;i<N;i++){
        printf("%d",smax);
    }
    return 0;
}