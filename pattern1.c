#include<stdio.h>

int main(){
    int n,i,j;
    printf("Enter the number of rows and col ");
    scanf("%d",&n);
    int a = 0;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            a++;
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}
