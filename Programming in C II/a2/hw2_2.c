/*
 JTSK-320112
 a2_2.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char* ptr;
    char s1[100];
    char s2[100];
    fgets(s1,100,stdin);
    s1[strlen(s1)-1]='\0';
    fgets(s2,100,stdin);
    s2[strlen(s2)-1]='\0';
    ptr=(char*)malloc(sizeof(char)*(strlen(s1)+strlen(s2)));
    int i;
    for(i=0;i<(unsigned)strlen(s1);i++){
        ptr[i]=s1[i];
    }
    for(i=(unsigned)strlen(s1);i<(unsigned)strlen(s1)+(unsigned)strlen(s2);i++){
        ptr[i]=s2[i-(unsigned)strlen(s1)];
    }
    printf("Result of concatenation: %s\n",ptr);
    free(ptr);
    return 0;
}
