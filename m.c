#include<stdio.h>

int dowork(int a,int b);
int main(){
   int a = 3,b = 5;
   dowork(a,b);
   return 0;
}

int dowork(int a,int b){

 int sum = a + b;
 int product = a*b;
 int average = (a+b)/2;
 printf("sum = %d\n product = %d\n average = %d\n",sum,product,average);
}

