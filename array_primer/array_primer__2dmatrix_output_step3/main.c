#include <stdio.h>

int	n[3][4] = {
		{1, 2, 3, 4},
		{6, 5, 4, 3},
		{3, 1, 8, 1},
	};

int	main(void)
{

	// printf("%d\n",n[2][3]);

	// printf("%p\n",&n[0]);
	// printf("%p\n",&n[1]);
	// printf("%p\n",&n[2]);
	// printf("%p\n",&n[3]);
	// printf("%p\n",&n[4]);

	// printf("%d\n",n[0][0]);
	// printf("%d\n",n[1][0]);
	// printf("%d\n",n[2][0]);
	// printf("%d\n",n[3][0]);

	// printf("%d\n", sizeof(n));
	// printf("%d\n", sizeof(n[0]));

	// C言語の配列の個数を出すやり方
	// printf("%d\n", sizeof(n) / sizeof(n[0]));
	// jsの場合
	// length(n);

	int count = 0;
	for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
	{
		// printf("%d\n", n[i][0]);
		count++;
	}
	printf("%d\n",count);
}
