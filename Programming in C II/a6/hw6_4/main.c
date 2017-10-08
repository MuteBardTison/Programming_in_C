/*
 JTSK-320112
 a6_p4.c
 long,danni
 d.long@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char username[100];
    char filename[100];
    char password[100];
    long i;
    char* buffer, *buff;
    long length;
    FILE *fptr;
    scanf("%s",filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        fprintf(stderr, "Cannot open file!\n");
        exit(1);
    }
    
    fseek(fptr, 0L, SEEK_END);
    length=ftell(fptr);
    rewind(fptr);
    
    while(1){
        fgets(username,sizeof(username),stdin);
        if(strcmp(username, "exit")==0){
            printf("Exiting...\n");
            break;
        }
        
        for(i=1L;i<=length-strlen(username);i++){
            buffer = (char*) malloc (sizeof(char)*strlen(username));
            if (buffer == NULL)
                exit(1);
            fread(buffer, sizeof(char), strlen(username), fptr);
            if(strcmp(buffer, username)==0){
                fseek(fptr, 1L*strlen(username), SEEK_CUR);
                break;
            }
            else{
                fseek(fptr, 1L, SEEK_CUR);
            }
            free(buffer);
        }
        fgets(password,sizeof(password),stdin);
        buff = (char*) malloc (sizeof(char)*strlen(password));
        if (buff == NULL)
            exit(1);
        fread(buff, sizeof(char), strlen(password), fptr);
        
        if(strcmp(buff, password)==0)
            printf("Access to user %s is granted.\n", username);
        else
            printf("Access to user %s is denied.\n", username);
        free(buff);
        rewind(fptr);
        
    }
    fclose(fptr);
    return 0;
}
