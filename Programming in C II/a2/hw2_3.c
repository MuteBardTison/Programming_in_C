/*
 JTSK-320112
 a2_p3iii.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
void READMATRIX(int x, int y, int** mat){
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
            scanf("%d",&mat[i][j]);
    }
}

void MULTI(int** m1, int** m2, int** mr, int n, int m, int p){
    int i,j,k,sum;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            sum=0;
            for(k=0;k<m;k++)
            {
                sum+=m1[i][k]*m2[k][j];
            }
            mr[i][j]=sum;
        }
    }
}
void PRINT(int** mat, int x ,int y){
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n,m,p;
    scanf("%d%d%d",&n,&m,&p);
    int **mat1,**mat2,**matr,row,col;
    mat1=(int**)malloc(sizeof(int*)*n);
    mat2=(int**)malloc(sizeof(int*)*m);
    matr=(int**)malloc(sizeof(int*)*n);
    
    for(row=0;row<n;row++){
        mat1[row]=(int*)malloc(sizeof(int)*m);
        if(mat1[row]==NULL)
            exit(1);
    }
    for(row=0;row<m;row++){
        mat2[row]=(int*)malloc(sizeof(int)*p);
        if(mat2[row]==NULL)
            exit(1);
    }
    for(row=0;row<n;row++){
        matr[row]=(int*)malloc(sizeof(int)*p);
        if(matr[row]==NULL)
            exit(1);
    }
    
    READMATRIX(n, m, mat1);
    READMATRIX(m, p, mat2);
    MULTI(mat1,mat2,matr,n,m,p);
    printf("Matrix A:\n");
    PRINT(mat1, n, m);
    printf("Matrix B:\n");
    PRINT(mat2, m, p);
    printf("The multiplication result AxB:\n");
    PRINT(matr, n, p);

    for(col=0;col<n;col++)
        free(mat1[col]);
    free(mat1);
    for(col=0;col<m;col++)
        free(mat2[col]);
    free(mat2);
    for(col=0;col<n;col++)
        free(matr[col]);
    free(matr);

    return 0;
}
