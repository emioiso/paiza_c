#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	x,y,n;

	scanf("%d%d%d",&x,&y,&n);
// 	printf("%d %d %d\n",x,y,n);
	int addXY = abs(x + y);
// 	printf("subXY = %d\n", addXY);
	char strInt[10];
	sprintf(strInt, "%d", addXY);
// 	printf("strInt = %s\n", strInt);

	for(int i = 0; strInt[i] != '\0'; i++){
	   // printf("%c",strInt[i]);
	   if(i == n - 1){
            printf("%c",strInt[i]);
	   }
	}
	return (0);
}
