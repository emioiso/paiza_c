#include <stdio.h>
#include <stdbool.h>

int	main(void)
{
	char s[1001];
	int count = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		scanf("%s",&s[i]);
		// printf("%c\n",s[i]);
		count++;
	}
	char s2[1001];
	for (int i = count - 1; i >= 0; i--)
	{
		s2[count - i - 1] = s[i];
		// printf("%c", s2[i]);
	}
	// printf("\n");
	bool flag = true;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if(s[i] != s2[i]){
			flag = false;
			break;
		}
	}
	if(flag == true){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return (0);
}
