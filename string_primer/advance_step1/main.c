#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[101];
	char ansS[101];

	scanf("%s",s);
	int len = strlen(s);
// 	printf("len = %d\n",len);
	int count = 0;
	for (int i = 0; i <= len; i++)
	{
	   // printf("ansS = %s ",ansS);
		if(s[i] == ',' || s[i] == '\0'){
			ansS[i - count] = '\0';
// 			printf("ansS = %s\n",ansS);
			printf("%s\n",ansS);
			count = i + 1;
		} else {
			ansS[i - count] = s[i];
		}
	}
	return (0);
}
