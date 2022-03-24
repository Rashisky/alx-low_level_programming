#include <stdio.h>


char *main(char *s1, char *s2)
{
	s1[0] = 'a';
	s1[1] = 'b';
	s1[2] = 'c';

	s2[0] = 'd';
	s2[1] = 'e';
	s2[2] = 'f';

	s1 = add(s1,s2);

	return (s1);
}
