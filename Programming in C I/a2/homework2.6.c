#include<stdio.h>
int main(){
	float a,b;
	scanf("%f %f",&a,&b);
	float *ptr1,*ptr2,*ptr3;
	ptr1=&a;
	ptr2=&a;
	ptr3=&b;
	printf("%p\n%p\n%p\n",ptr1,ptr2,ptr3);
	return 0;
}
