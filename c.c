#include<stdio.h>
int main(){
    int mat1[3][3],mat2[3][3],i,j,mat3[3][3];
    printf("enter 3*3 matrix 1 element");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter 3*3 matrix 2 element");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("the new matrix\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");

    }
    return 0;
}
