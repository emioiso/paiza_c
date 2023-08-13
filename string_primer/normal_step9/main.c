#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	main(void)
{
	char s[101];
	char t[101];

	scanf("%s%s",s,t);

// 	printf("%s\n",s);

    for (int i = 0; s[i] != '\0'; i++)
	{
// 		printf("%c",s[i]);
	}
// 	printf("\n");
	for (int i = 0; t[i] != '\0'; i++)
	{
// 		printf("%c",t[i]);
	}
	bool flag = false;
	for (int i = 0; s[i] != '\0'; i++)
	{
	    if(strncmp(&s[i],t,strlen(t)) == 0){
		    flag = true;
		}


	}
	if(flag == true){
	    printf("YES\n");
	} else {
	    printf("NO\n");
	}
	return (0);
}
