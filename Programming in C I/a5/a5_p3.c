//
//  main.c
//  a5_p3
//
//  Created by QiZihan on 16/9/29.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a5_p3_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

double harmonic_mean(int arr[],int num){
    int i;
    double m,s;
    double a[10];
    for(i=0;i<num;i++)
    a[i]=arr[i];
    for(i=0;i<num;i++)
    {
        s+=1/a[i];
    }
    m=num/s;
    return m;
}
int main()
{
    int m,i,num,max,min,sum;
    char c;
    int a[10]={0};
    num=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&m);
        if(m<0)
            break;
        else
            a[i]=m;
        num++;
    }
    scanf("%*c%c",&c);
    switch(c){
        case 'm':
            printf("%lf\n",harmonic_mean(a,num));
            break;
        case 'h':
            max=a[0];
            for(i=1;i<num;i++)
            {
                if(max<a[i])
                    max=a[i];
            }
            printf("%d\n",max);
            break;
        case 'l':
            min=a[0];
            for(i=1;i<num;i++)
            {
                if(min>a[i])
                    min=a[i];
            }
            printf("%d\n",min);
            break;
        case 's':
            sum=0;
            for(i=0;i<num;i++)
                sum=sum+a[i];
            printf("%d\n",sum);
            break;
        case 'n':
            printf("%d\n",num);
            break;
        default:
            break;
    }
    return 0;
}
