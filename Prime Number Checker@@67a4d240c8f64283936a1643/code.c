# include <stdio.h>

int isPrime(int n);

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
}return 0;
}

int isPrime(int n){
    if (n==1)return 0;
    else{
        int c=0;
    for(int i=1;i<n/2;i++){
        if (n%i==0)c+=1;
    }if (c==2)return 1;
    else return 0;
}}