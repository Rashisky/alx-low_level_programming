#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/* main - assign number to the variable n and execute */
/* return - always 0 (Success) */
/* function main - assign number to variable and execute */
/* return value - always 0 (Success) */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (n > 0)
		{
			if (l > 5)
				printf("%s %d %s %d %s\n", "Last digit of", \
						n, "is", l, "and is greater than 5");
			else
				if (l > 0 && l < 6)
					printf("%s %d %s %d %s\n", "Last digit of", \
							n, "is", l, "and is less than 6 and not 0");
				else
					printf("%s %d %s %d %s\n", "Last digit of", \
							n, "is", l, "and is 0");				
		}
	else
		if (l > 5)
			printf("%s %d %s %d %s\n", "Last digit of", \
					n, "is", l, "and is	greater than 5");
	       	else
			if (l == 0)
				printf("%s %d %s %d %s\n", "Last digit of", \
						n, "is", l, "and is 0");
			else
				printf("%s %d %s %d %s\n", "Last digit of", \
						n, "is", l, "and is less than 6 and not 0");

	return (0);
}
