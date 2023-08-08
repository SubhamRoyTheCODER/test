#include<stdio.h>
#include<math.h>
void square();
void circle();
void rectangle();

int main(){
square(12);
circle(11);
rectangle(12,14);

    return 0;
}

void square(int a){
    
    printf("%0.2f\n",pow(a,2));
    
}
void circle(int r){
    printf("%0.2f\n",3.14*pow(r,2));
}

void rectangle(int a, int b){
    printf("%d",a*b);
}


