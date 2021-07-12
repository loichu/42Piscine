#include <stdio.h>

void test(char *str, int i);

int	main ()
{
	test("Test %d", 4);
}

void test(char *str, int i)
{
	sprintf(str, "%s\n", *str);
	printf(*str, i);
}
