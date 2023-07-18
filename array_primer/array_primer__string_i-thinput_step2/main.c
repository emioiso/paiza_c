#include <stdio.h>
int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);

	char s[5][11];
	for (int i = 0; i < 5 ; i++){
	   // char s[11];
        scanf("%s",s[i]);
        // printf("%s\n", s[i]);
        if(n - 1 == i){
            // printf("%c\n", s[i]);
            printf("%s\n", s[i]);
        }
	}

	return (0);
}
