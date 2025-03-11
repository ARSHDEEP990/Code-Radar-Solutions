#include <stdio.h>
#include <limits.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    
    for(int i=0;i<size;i++){
        if(smax!=arr[i] &&  smax!=max)
    }
    printf("%d",smax);
    return 0;
}