#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}
void swqp(int *a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	return;
}
int main() {
	printf("hello.\n");
	int a=30,b=20;
	
	printf("a+b=%d\n", add(a+b);
	return 0;
}
