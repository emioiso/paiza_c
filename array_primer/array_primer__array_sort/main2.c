#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
	// printf("%d\n",n);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

//ここから昇順ソート
	int i;
	int j;
	int tmp = 0;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	//	並べ替え結果の表示
	for ( i= 0 ; i < n; i++){
		printf("%d\n", a[i]);
	}
    return(0);
}
