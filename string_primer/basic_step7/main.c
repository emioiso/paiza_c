#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);
	char s[10001][n];
	for(int i = 0; i < n; i++){
	    scanf("%s",s[i]);
	    printf("%s",s[i]);
	}
	printf("\n");
	return (0);
}
