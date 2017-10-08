/*
 JTSK-320112
 a4_p3.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
void (*func)(int*,int);

int cmp(const void *a, const void *b)
{
    return(*(int *)a-*(int *)b);
}

int cmp2(const void *a, const void *b)
{
    return(*(int *)b-*(int *)a);
}

void sort_ascending(int* ptr, int n){
    int i;
    qsort(ptr,n,sizeof(int),cmp);
    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");
    
}
void sort_descending(int* ptr, int n){
    int i;
    qsort(ptr,n,sizeof(int),cmp2);
    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");
    
}
void dispose(int* ptr, int n){
    free(ptr);
    exit(1);
}

int main(){
    int i,n;
    char c;
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    while(1){
        scanf("%c",&c);
        switch(c){
            case 'a':
                func=&sort_ascending;
                (*func)(ptr,n);
                break;
            case 'd':
                func=&sort_descending;
                (*func)(ptr,n);
                break;
            case 'e':
                func=&dispose;
                (*func)(ptr,n);
                break;
        }
    }
    return 0;
}
