
// #include <stdio.h>

// int main(void)
// {
//     // 配列要素数を省略
//     char array[] = { 10, 20, 30, 40, 50 };
//     int i;

// 	int count = 0;
//     // 配列要素数の5を結局指定…
//     for (i=0 ; i < 5 ; i++)
//     {
//         printf("%d\n", array[i]);
// 		count++;
// 	}
// 	printf("%d\n", count);

// 	return 0;
// }

#include <stdio.h>

int	main(void)
{

	int	n[3][3] = {
		{2, 3},
		{1},
		{4, 5, 6}
	};
	printf("%lu\n", sizeof(n[0][0]));
	printf("%lu\n", sizeof(n));
	printf("%lu\n", sizeof(n[0]));
	printf("%lu\n", sizeof(n[1]));
	printf("%lu\n", sizeof(n[2]));
	// printf("%lu\n", sizeof(n[1][0]) / sizeof(n[1][0]));
	// printf("%lu\n", sizeof(n[0]) / sizeof(n[2][0]));
	printf("%lu\n", sizeof(n[0][0]) / sizeof(n[0][0]));
	return (0);
}
