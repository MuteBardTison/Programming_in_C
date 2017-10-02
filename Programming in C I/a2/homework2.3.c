/*
 JTSK-320111
 a2_p3_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
int main(){
	int hours,minutes,seconds,total;
	scanf("%d %d %d",&hours,&minutes,&seconds);
	total=3600*hours+60*minutes+seconds;
	printf("%d",total);
	return (0);
} 
