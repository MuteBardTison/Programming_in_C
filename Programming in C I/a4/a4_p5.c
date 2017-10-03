//
//  main.c
//  a4_p5
//
//  Created by QiZihan on 16/9/26.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a4_p5_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

int s;

int sum(int a[])
{
    int i,SUM=0;
    for(i=1;i<=8;i++)
    {
        if(a[i]==-99)
            break;
        SUM+=a[i];
    }
    return SUM;
}

double avrg(int a[])
{
    int i;
    double AVRG=0;
    for(i=1;i<=8;i++)
    {
        if(a[i]==-99)
            break;
        AVRG+=a[i];
    }
    AVRG=AVRG/(s-1);
    return AVRG;
}

int main()
{
    int i;
    int a[8]={0};
    s=1;
    for(i=1;i<=8;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]==-99)
          break;
        s++;
    }
    printf("%d\n%lf\n",sum(a),avrg(a));
    return 0;
}
