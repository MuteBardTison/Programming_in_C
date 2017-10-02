//
//  main.c
//  a3_p9
//
//  Created by QiZihan on 16/9/26.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a3_p9_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

int main()
{
    char c;
    int i,n;
    float a[50];
    float sum,pro,avg;
    scanf("%c",&c);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%f",&a[i]);}
    
    switch(c)
    {
        case 'p':
            pro=1;
            for(i=0;i<n;i++)
            {
                pro*=a[i];
            }
            printf("%f\n",pro);
            break;
        case 's':
            sum=0;
            for(i=0;i<n;i++)
            {
            sum+=a[i];
            }
            printf("%f\n",sum);
            break;
        
        default:
            sum=0;
            for(i=0;i<n;i++)
            {
            sum+=a[i];
            }
            avg=sum/n;
            printf("%f\n",avg);
            break;
    }
    return 0;
}
