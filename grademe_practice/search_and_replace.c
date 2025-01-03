#include <unistd.h>
void	search_and_replace(char *str, char *search, char *replace)
{
	if (search[1] != '\0' || replace[1] != '\0')
		return;
	while(*str)
	{
		if (*str == *search)
			*str = *replace;
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}
