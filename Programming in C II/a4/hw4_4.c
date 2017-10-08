/*
 JTSK-320112
 a4_p4.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

struct person{
    char name[30];
    int age;
};
//function pointer
void (*func)(struct person**,int);
//bubblesort function
void bubblesort(struct person** ptr, int num){
    int i,j,k;
    struct person *temp;
    
    //sort according to name
    for(i=0;i<num-1;i++){
        for(j=num-1;j>i;j--){
            if(ptr[j]->name==ptr[j-1]->name){
                if(ptr[j]->age<ptr[j-1]->age){
                    temp=ptr[j];
                    ptr[j]=ptr[j-1];
                    ptr[j-1]=temp;
                    break;
                }
            }
            else{
                for(k=0;k<30;k++){
                    if(ptr[j]->name[k]<ptr[j-1]->name[k]){
                        temp=ptr[j];
                        ptr[j]=ptr[j-1];
                        ptr[j-1]=temp;
                        break;
                    }
                    if(ptr[j]->name[k]>ptr[j-1]->name[k]){
                        break;
                    }
                }
            }
        }
    }
    for(i=0;i<num;i++){
        printf("{%s, %d}; ",ptr[i]->name,ptr[i]->age);
    }
    printf("\n");
    //sort according to age
    for(i=0;i<num-1;i++){
        for(j=num-1;j>i;j--){
            if(ptr[j]->age==ptr[j-1]->age){
                for(k=0;k<30;k++){
                    if(ptr[j]->name[k]<ptr[j-1]->name[k]){
                        temp=ptr[j];
                        ptr[j]=ptr[j-1];
                        ptr[j-1]=temp;
                        break;
                    }
                    if(ptr[j]->name[k]>ptr[j-1]->name[k]){
                        break;
                    }
                }
            }
            else{
                if(ptr[j]->age<ptr[j-1]->age){
                    temp=ptr[j];
                    ptr[j]=ptr[j-1];
                    ptr[j-1]=temp;
                }
            }
        }
    }
    
    for(i=0;i<num;i++){
        printf("{%s, %d}; ",ptr[i]->name,ptr[i]->age);
    }
    printf("\n");
}

int main(){
    int i,num;
    scanf("%d",&num);
    //dynamically allocate memory
    struct person** ptr;
    ptr=(struct person**)malloc(sizeof(struct person*)*num);
    if(ptr==NULL)
        exit(1);
    for(i=0;i<num;i++){
        ptr[i]=(struct person*)malloc(sizeof(struct person));
        if(ptr[i]==NULL)
            exit(1);
        scanf("%s",ptr[i]->name);
        scanf("%d",&ptr[i]->age);
    }
    //call function
    func=&bubblesort;
    (*func)(ptr,num);
    //deallocate memory
    for(i=0;i<num;i++){
        free(ptr[i]);
    }
    free(ptr);
    return 0;
}
