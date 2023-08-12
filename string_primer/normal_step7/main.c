#include <stdio.h>
int	main(void)
{
	char s[101];

	scanf("%s",s);
// 	printf("%s\n",s);

    for (int i = 0; s[i] != '\0'; i++)
	{
// 		printf("%c\n",s[i]);
		if(s[i] > 90){
		    printf("%c",s[i] - 32);
		} else {
		    printf("%c",s[i]);
		}
	}
	printf("\n");
	return (0);
}
