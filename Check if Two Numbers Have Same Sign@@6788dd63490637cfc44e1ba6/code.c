#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b;
    scanf("%d",&b);

    if(n>=0 && b>=0){
        printf("Same Sign");
    }
    
    if(n<=0 && b<=0){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}