#include <stdio.h>

int	parse_int(char *arg);

int	main(int argc, char **argv)
{
	int	x;

	for (x = 1; x < argc; x++)
	{
		printf("\n\n--------\nArg %x: %s\n", x, argv[x]);
		parse_int(argv[0]);
	}
}

int	parse_int(char *arg)
{
	int	res;
	int	mult;

	res = 0;
	mult = 1;
	while (arg[res] != '\0')
	{
		printf("\nChar: %c, Dec: %d\n", arg[res], arg[res]);
		res += arg[res] * mult;
		mult *= 10;
	}
	printf("\n===== Total: %d ======\n", res);
	return (res);
}
