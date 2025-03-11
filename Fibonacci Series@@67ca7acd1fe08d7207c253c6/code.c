int fibonacciSeries(int n){
    if (n==0) {return 0};
    else if (n==1 && n==2) {return 1};
    else {int recAns = fibonacciSeries(n-1)+fibonacciSeries(n-2);
    return recAns};
}