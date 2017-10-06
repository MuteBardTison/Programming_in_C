//
//  main.c
//  a6_p8_m1
//
//  Created by QiZihan on 16/10/7.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a6_p8_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fin,*fout;
    fin=fopen("char.txt","r");
    fout=fopen("code.txt","w");
    if(fin==NULL)
        exit(1);
    char c;
    c=getc(fin);
    fprintf(fout,"%d",c); 
    fclose(fin);
    fclose(fout);
    return 0;
}
