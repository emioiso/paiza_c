#include <stdio.h>
int	main(void)
{
	char	s[10001];
	char	t[10001];
	int n;

	scanf("%s%s%d",s,t,&n);
// 	printf("%s\n%s\n%d\n",s,t,n);

	char newStr[10001];
	for(int i = 0; s[i] != '\0'; i++){
	    if(i <= n - 1){
	        newStr[i] = s[i];
	        printf("%c",newStr[i]);
	    }
	}

	for(int i = 0; t[i] != '\0'; i++){
	        newStr[i] = t[i];
	        printf("%c",newStr[i]);
	}
	for(int i = 0;s[i] != '\0'; i++){
	       if(i > n - 1){
	        newStr[i] = s[i];
	        printf("%c",newStr[i]);
	    }
	}
    printf("\n");
	return (0);
}
