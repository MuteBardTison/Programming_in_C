//
//  main.c
//  111
//
//  Created by QiZihan on 16/9/23.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a4_p1_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */


/*Because the loop just operates for once and returns the value of idx. So adding "continue" phase to finish the loop*/

#include <stdio.h>
int length(char str[]){
    int idx;
    for(idx=0;str[idx]!='\0';++idx)
        continue;
        return idx;
}

int main(){
    char line[100];
    while(1){
        printf("Enter string:\n");
        fgets(line,sizeof(line),stdin);
        printf("Length (including newline) is: %d\n", length(line));
    }
    return 0;
}
