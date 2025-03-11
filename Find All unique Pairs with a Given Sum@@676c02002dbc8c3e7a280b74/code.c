#include <stdio.h>
int main(){
    int size;
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==x){
                printf("%d %d",arr[i],arr[j]);
            }
        }
        printf("\n");
    }
    return 0;
}