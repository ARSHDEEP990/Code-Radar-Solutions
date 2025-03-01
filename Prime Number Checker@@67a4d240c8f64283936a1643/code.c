#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
int isPrime(int n){
    int a = 0;
    for(int i=2;i<=n-2;i++){
        if(n%2==0){
            a==0;
        }
        else a==1;
    }
    return printf("%d",&a);
}