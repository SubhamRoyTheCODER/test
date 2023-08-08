#include<stdio.h>

int fib(int n);

int main(){
   fib(4);
    return 0;
}






int fib(int n){
    if(n==1){
        return n;
    }
    if(n==0){
        return n;
    }
    int fibN=fib(n-1)+fib(n-2);
    printf("%d",fibN);
    return fibN;
}