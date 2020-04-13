#include <stdio.h>

void swqp(int *a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	return;
}
int main() {
	printf("hello.\n");
	return 0;
}
