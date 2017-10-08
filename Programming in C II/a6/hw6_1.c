/*
 JTSK-320112
 a6_p1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#define CHECK ch==' '||ch==','||ch=='?'||ch=='!'||ch=='.'||ch=='\t'||ch=='\r'||ch=='\n'
int main(){
    char ch;
    FILE* fin;
    int count;
    fin=fopen("words.txt","r");
    if(!fin){
        fprintf(stderr,"Cannot open the file!\n");
        exit(1);
    }
    ch=fgetc(fin);
    count=0;
    while(ch!=EOF){
        ch=fgetc(fin);
        if(CHECK){
            ch=fgetc(fin);
            while(CHECK)
                ch=fgetc(fin);
            count++;
        }
        
    }
    printf("The file contains %d words.\n",count);
    fclose(fin);
    return 0;
}
