#include <stdio.h>
int isprime(int n){
    int a = 0;
    for(int i=1;i<=n-2;i++){
        if(n%2==0){
            a==0;
        }
        else a==1;
    }
    printf("%d",&a);
    return;


}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isprime(num));
    }
    return 0;
}