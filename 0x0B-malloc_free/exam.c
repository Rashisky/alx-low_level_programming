#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char *s = "Rashisky";
	char y[30] = "Adejare Abdulrasheed";
	char *t;

	t = malloc(sizeof(*t) * sizeof(s));

	printf("Size of s is: %ld\n", sizeof(s));
	printf("Size of *s is: %ld\n", sizeof(*s));

	printf("Size of y is: %ld\n", sizeof(y));
	printf("Size of *y is: %ld\n", sizeof(*y));
	printf("Size of t is: %ld\n", sizeof(t));
}
