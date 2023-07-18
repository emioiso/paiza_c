#include <stdio.h>
int	main(void)
{
	int	n,m,l;

	scanf("%d%d%d",&n,&m,&l);
// 	printf("%d %d %d\n",n,m,l);

	char s[m][11];
	for (int i = 0; i < m; i++){
        scanf("%s",s[i]);
        // printf("%s ",&s[i]);
    }

    char newS = s[n - 1][l - 1];
    printf("%c",newS);
	return (0);
}
