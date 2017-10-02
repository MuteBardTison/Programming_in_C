#include<stdio.h>

int main()
{	
	int val;
	scanf("%d",&val);
	printf("%d\n",val);
	int *ptr_val;
	ptr_val=&val;
	printf("%p\n",ptr_val);
	val=*ptr_val+1;
	printf("%d\n%p\n",*ptr_val,ptr_val);
	return (0);
}
