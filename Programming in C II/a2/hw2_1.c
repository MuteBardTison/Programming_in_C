/*
 JTSK-320112
 a2_p1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, length;
    scanf("%d",&length);
    float* ptr,*ptr2;
    ptr = (float*)malloc(sizeof(float)*length);
    if(ptr==NULL)
        exit(1);
    ptr2=ptr;
    for(i=0;i<length;i++)
        scanf("%f",&ptr[i]);
    for(;;)
    {
        if(*ptr<0)
        {
            printf("Before the first negative value: %ld elements\n",ptr-ptr2);
            break;
        }
        else
            ptr++;
    }
    free(ptr2);
    return 0;
}
