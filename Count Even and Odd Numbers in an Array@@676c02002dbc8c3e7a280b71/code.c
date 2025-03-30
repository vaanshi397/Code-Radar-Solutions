#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    printf("%d %d",count_even,count_odd);
    return 0;
}