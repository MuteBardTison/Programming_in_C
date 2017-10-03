//
//  main.c
//  a4_p9
//
//  Created by QiZihan on 16/9/28.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a4_p9_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    char *p;
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    printf("%u\n%u\n",(unsigned)strlen(s1),(unsigned)strlen(s2));
    char s4[200];
    strcpy(s4,s1);
    strcat(s4,s2);
    printf("%s\n",s4);
    char s3[100];
    strcpy(s3,s1);
    printf("%s\n",s3);
    printf("%d\n",strcmp(s1,s2));
    scanf("%*c%c",&c);
    p=strchr(s1,c);
    if(p == NULL)
        printf("The character is not contained in the string.\n");
    while(p!=NULL){
        printf("%d\n",*p);
        p=strchr(p+1,c);
    }
    return 0;
}
