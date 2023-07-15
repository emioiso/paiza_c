#include <stdio.h>
int	main(void)
{
	int	A,b,n;

	scanf("%d%d%d",&A,&b,&n);
// 	printf("%d %d %d\n",A,b,n);

	int a[n];
	int aa[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
// 		printf("%d\n",a[i]);
		if(a[i] == A){
            aa[i] = b;
            printf("%d\n",aa[i]);
		} else {
		    aa[i] = a[i];
		    printf("%d\n",aa[i]);
		}
	}
	return (0);
}
