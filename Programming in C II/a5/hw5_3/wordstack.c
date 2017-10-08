/*
 JTSK-320112
 a5_p3.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int main(){
    struct stack my_stack_reverse;
    struct stack *ptr=&my_stack_reverse;
    struct stack help;
    struct stack *temp=&help;
    ptr->count=0;
    temp->count=0;
    int i,k,l;
    char list[30]="";
    char s[30]="";
    char tmp;
    fgets(list,30,stdin);
    for(i=(int)strlen(list)-2;i>=0;i--){
        push(ptr,list[i]);
    }
    printf("%s\n",ptr->character);
    i=0;
    while(i<strlen(list)){
        if(ptr->character[i]!=' '){
            push(temp,ptr->character[i]);
        }
        if(ptr->character[i]==' '||ptr->character[i]=='\0'){
            k = 0;
            l = (int)strlen(temp->character) - 1;
            while (k < l) {
                tmp = temp->character[k];
                temp->character[k] =temp->character[l];
                temp->character[l] = tmp;
                k++;
                l--;
            }
            strcat(s, temp->character);
            temp->count=0;
            printf("%s\n",s);
            strcat(s, " ");
        }
        i++;
    }
    s[strlen(s)-1]='\0';
    if(strcmp(list,s)==0){
        printf("The sentence is palindromic by words!\n");
    }
    else{
        printf("The sentence is not palindromic by words!\n");
    }
    
    return 0;
}
