#include <stdio.h>

int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);

	int a[n];
	int totalA = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d ",a[i]);
		totalA += a[i];
	}
// 	printf("\n");
    // printf("totalA = %d\n",totalA);
    double aveA =  (double)totalA / n;
    // printf("aveA = %f\n",aveA);

    for (int i = 0; i < n; i++)
	{
	    if(aveA <= a[i]){
	        printf("%d\n",a[i]);
	    }
	}
	return (0);
}
