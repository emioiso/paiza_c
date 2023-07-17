#include <stdio.h>
int	main(void)
{
	char str[6][8] = {
		"good",
		"morning",
		"paiza",
		"813",
		"pa13",
	};

	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);

	// strの配列何種類の文字列があるか調べる。
	int ans = 0;
	ans = sizeof(str) / sizeof(str[0]);

	for (int i = 0; i < ans; i++)
	{
		if(n - 1 == i){
			printf("%s\n", str[i]);
		}
	}
	return (0);
}
