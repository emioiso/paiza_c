#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);

	int sum[n];
	for (int i = 0; i < n; i++){
		scanf("%d",&sum[i]);
// 		printf("sum[%d] = %d\n",i ,sum[i]);

	}


    int tmp = 0;
	for (int i = 0; i < n; i++)	{
		for (int j = i + 1; j < n; j++){
			if (sum[i] > sum[j]){
				tmp = sum[i];
				sum[i] = sum[j];
				sum[j] = tmp;
			}
		}
	}
	int min = 0;
	int max = 0;
	//	並べ替え結果の表示
	for (int i = 0 ; i < n; i++){
// 		printf("sum[%d]= %d\n",i, sum[i]);

        if(i == 0){
            min = sum[i];
            // printf("min = %d",min);
        } else if(i == n - 1){
            max = sum[i];
            // printf("max = %d",max);
        }
	}
	if(!max){
        printf("%d %d\n",min,min);
	} else {
	    printf("%d %d\n", max,min);
	}
	return (0);
}
