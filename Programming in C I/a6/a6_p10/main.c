//
//  main.c
//  a6_p10_m1
//
//  Created by QiZihan on 16/10/7.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a6_p10_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char line[1000];
    FILE *fin,*fout;
    fin=fopen("text.txt","r");
    fout=fopen("text_copy.txt","w");
    if(fin==NULL)
        exit(1);
    while(!feof(fin))
	{
        fgets(line,sizeof(line),fin);
        //fprintf(fout,"%s",line);
        fputs(line,fout); 
    }  
    fclose(fin);
    fclose(fout);
    return 0;
}
