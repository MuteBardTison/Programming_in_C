//
//  main.c
//  a5_p8
//
//  Created by QiZihan on 16/10/5.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a5_p8_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
void print_matrix(int a[][50],int n)
{
    int i,j;
    printf("The entered matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
          printf("%d ",a[i][j]);
    printf("\n");
    }
}
void print_diag(int a[][50],int n)
{
    int i;
    printf("The main diagonal is:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i][i]);
    printf("\n");
}
int main()
{
    int a[50][50];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    print_matrix(a,n);
    print_diag(a,n);
    return 0;
}
