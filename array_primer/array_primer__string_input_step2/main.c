#include <stdio.h>
int	main(void)
{
	char s[11][11];

	for (int i = 0; i < 10; i++)
	{
		scanf("%s",&s[i]);
		printf("%s\n",s[i]);
	}
	return (0);
}
