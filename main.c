#include<stdio.h>
int fibonacci(int n);
void main(){
    int n,sum=0;
    printf("enter limit");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int new=fibonacci(i)*fibonacci(i);
        sum+=new;
    }
    printf("sum of the baries\n%d",sum);
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return(fibonacci(n-1)*fibonacci(n-2));
    }
} 



