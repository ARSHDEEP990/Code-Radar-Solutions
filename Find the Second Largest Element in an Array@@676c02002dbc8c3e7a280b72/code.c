#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max = -999;
    int smax = -999;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]!=max && smax<=arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
    }
