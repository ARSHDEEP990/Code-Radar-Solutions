#include <stdio.h>
void rotatearray(int arr[],int size,int k){
    k = k%size;
    if(k<0){
        k = k+ size;
    }
    int temp[size];
    for(int i=0;i<k;i++){
        temp[i] = arr[size-k+i];
    }
    for(int i=k;i<size;i++){
        temp[i] = arr[i-k];
    }
    for(int i=0;i<size;i++){
        arr[i] = temp[i];
    }

    
}
int main(){
    int size;
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);

    rotatearray(arr,size,k);

    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
            

    return 0;

}