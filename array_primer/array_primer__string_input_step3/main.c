#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);

	char s[n][n];
	for (int i = 0; i < n; i++){
		scanf("%s",&s[i]);
		printf("%s\n",s[i]);
	}

	return (0);
}
