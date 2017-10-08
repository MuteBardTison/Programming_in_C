/*
 JTSK-320112
 a4_p2.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void (*func[4])(char[]);
void a(char ptr[]){
    int i;
    for(i=0;i<strlen(ptr);i++){
        if(ptr[i]>96&&ptr[i]<123){
            ptr[i]=(int)ptr[i]-32;
        }
    }
    printf("%s",ptr);
}
void b(char ptr[]){
    int i;
    for(i=0;i<strlen(ptr);i++){
        if(ptr[i]>64&&ptr[i]<91){
            ptr[i]=(int)ptr[i]+32;
        }
    }
    printf("%s",ptr);
}
void c(char ptr[]){
    int i;
    for(i=0;i<strlen(ptr);i++){
        if(ptr[i]>64&&ptr[i]<91){
            ptr[i]=(int)ptr[i]+32;
            continue;
        }
        if(ptr[i]>96&&ptr[i]<123){
            ptr[i]=(int)ptr[i]-32;
        }
    }
    printf("%s",ptr);
}
void d(char ptr[]){
    exit(0);
}
int main(){
    char s[1001];
    char help[1001];
    fgets(s, sizeof(s), stdin);
    int i,num;
    func[0] = &a;
    func[1] = &b;
    func[2] = &c;
    func[3] = &d;
    while(1){
        scanf("%d",&num);
        for(i=0;i<strlen(s);i++){
            help[i]=s[i];
        }
        (*func[num-1])(help);
    }
    return 0;
}
