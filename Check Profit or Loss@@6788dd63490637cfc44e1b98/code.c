#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int b;
    scanf("%d",&b);

    if(a<b){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}