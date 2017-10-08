 /*
 JTSK-320112
 a2_p4.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
//Function for reading 3-D array
void READARR(int ***arr, int row, int col, int dep){
    int i,j,k;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            for(k=0;k<dep;k++){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
}
//Function for printing arrays
void PRINT(int ***arr, int row, int col, int dep){
    int i,j,k,s;
    s=1;
        for(i=0;i<dep;i++){
            printf("Section %d:\n",s);
            for(j=0;j<col;j++){
                for(k=0;k<row;k++){
                    printf("%d ",arr[j][k][i]);
                }
                printf("\n");
            }
            s++;
        }
}
//Main function
int main(){
    int row,col,dep,i,j;
    scanf("%d%d%d",&row,&col,&dep);
    //Dynamically allocate 3-D array
    int ***arr;
    arr=(int***)malloc(sizeof(int**)*row);
    for(i=0;i<row;i++){
        arr[i]=(int**)malloc(sizeof(int*)*col);
        for(j=0;j<col;j++){
            arr[i][j]=(int*)malloc(sizeof(int)*dep);
            if(arr[i][j]==NULL)
            exit(1);
        }
    }
    //Read 3-D array from standard input
    READARR(arr, row, col, dep);
    //Print 2-D section
    PRINT(arr, row, col, dep);
    //Deallocate 3-D array
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            free(arr[i][j]);
    }
    for(i=0;i<row;i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}
