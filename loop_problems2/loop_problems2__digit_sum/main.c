#include <stdio.h>

int	main(void)
{

	int	n;

	scanf("%d",&n);
	printf("%d\n",n);

	int dig = 0;
	int sum = 0;

	while(n){
		dig = n % 10;			//一の位を判定
		sum = sum + dig;		//一の位を足していく
		n = n / 10;				//一の位の次は十の位を判定をしたいから割り算をする。
	}
	printf("%d\n", sum);

	return (0);
}


// #include <stdio.h>

// int main()
// {
// /* 自然数 */
// 	int n;
// 	scanf("%d", &n);
// 	// printf("%d\n",n);


//   /* 各桁の数字 */
// 	int dig = 0;
// 	/* 和 */
// 	int sum = 0;

//   /* 自然数の各桁の数字の和を計算 */
// 	while(n){
// 		dig = n % 10;
// 		sum = sum + dig;
// 		n = n / 10;
// 		// printf("dig=%d\n", dig);
// 		// printf("sum=%d\n", sum);
// 		// printf("n=%d\n", n);
// 	}

//   /* 各桁の数字の和を出力 */
// 	printf("%d\n", sum);

// 	return 0;
// }


// #include <stdio.h>

// int	main(void)
// {
// 	int	n;

// 	scanf("%d",&n);
// 	printf("%d\n", n);

// 	int sum = 0;
// 	for (int i = 0; n < 0; i++)
// 	{
// 		sum = n / 10;
// 		printf("%d\n", sum);
// 	}
// 	// printf("%d\n", sum);

// 	return (0);
// }
