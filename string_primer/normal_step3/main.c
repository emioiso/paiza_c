#include <stdio.h>
int	main(void)
{
	char s[101];
	scanf("%s",s);
// 	printf("%s\n",s);
	int n;
	scanf("%d",&n);
// 	printf("n = %d",n);
	char c[2];
	scanf("%s",c);
// 	printf(" c = %s\n",c);

	char newS[101];
	for(int i = 0; s[i] != '\0'; i++){
	   // printf("s[%d] = %c\n",i,s[i]);
	   // printf("s[%d] = %c\n",i,c[i]);
	    if(i < n - 1){
	        newS[i] = s[i];
	       // printf("newS[%d] = %c\n",i,newS[i]);
	        printf("%c",newS[i]);
	    }
	}

	for(int i = 0; c[i] != '\0'; i++){
	        newS[i] = c[i];
	       // printf("newS[%d] = %c ",i,newS[i]);
	        printf("%c",newS[i]);
	}

	for(int i = 0; s[i] != '\0'; i++){
	    if(i > n - 1){
	        newS[i] = s[i];
	       // printf("newS[%d] = %c\n",i,newS[i]);
	       printf("%c",newS[i]);
	    }
	}
    printf("\n");
	return (0);
}
