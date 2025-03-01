
int isPrime(int n);



int isPrime(int n){
    if (n==1)return 0;
    else{
        int c=0;
    for(int i=1;i<=n/2;i++){
        if (n%i==0)c+=1;
    }if (c>=2)return 0;
    else return 1;
}}