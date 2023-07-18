#include <stdio.h>
int	main(void)
{
	int	n,m;

	scanf("%d%d",&n,&m);
// 	printf("%d %d\n",n,m);

	int s[m][11];
	for (int i = 0; i < m; i++)
	{
		scanf("%s",&s[i]);
		// printf("%s",s[i]);
		if(n - 1 == i){
			printf("%s",s[i]);
		}
	}
	return (0);
}
