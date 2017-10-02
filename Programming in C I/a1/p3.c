#include <stdio.h>

int main()
{
double result;
float divisor = 22.0;
result = 7 / divisor;
printf("The result is %lf\n", result);
return 0;
}/*22.0 is not an int data, also "result" is a double data and cannot use "%d"*/
