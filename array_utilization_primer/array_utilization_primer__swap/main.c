#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d\n",a[i]);
	}
	int x,y;
	scanf("%d %d", &x, &y);
// 	printf("%d %d\n",x,y);

	int swapA[n];
	for (int i = 0; i < n; i++)
	{
	   // printf("a[%d] = %d\n",i,a[i]);
	    if(i == x - 1){
	        swapA[i] = a[y - 1];
	       // printf("swapA[i] = %d\n",swapA[i]);
	        printf("%d\n",swapA[i]);
	    } else  if(i == y - 1){
	        swapA[i] = a[x - 1];
	        printf("%d\n",swapA[i]);
	    } else {
	        swapA[i] = a[i];
	        printf("%d\n",swapA[i]);
	    }
	}
	return (0);
}
