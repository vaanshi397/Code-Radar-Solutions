#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int freq[max+1];
    for(int i=0;i<=max;i++){
        freq[i]=0;
    }
    for(int i=0;i<N;i++){
        freq[arr[i]];
    }
    for(int i=0;i<=max;i++){
        if(freeq[i]>0){
            printf("%d %d",i,freq[i]);
        }
    }
    return 0;
}
