#include <stdio.h>
int isPrime(int num) {
    if (num < 2) return 0;
    if (num == 2 || num == 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}
int main(){
    int size;
    scanf("%d",&size);
    int count = 0;
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(isprime(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}