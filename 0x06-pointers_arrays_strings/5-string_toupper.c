#include <ctype.h>

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}
	return (str);
}
