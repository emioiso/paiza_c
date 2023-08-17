#include <stdio.h>
int	main(void)
{
	char s[1001];

	int count = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		scanf("%s",&s[i]);
// 		printf("%c", s[i]);
		count++;
	}
    // printf("\ncount = %d\n", count);

	for (int i = count - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
	return (0);
}
