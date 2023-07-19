#include <stdio.h>
#include<string.h>


int	main(void)
{
	int	n;

	scanf("%d",&n);
// 	printf("%d\n",n);

	char s[n][11];
	for (int i = 0; i < n; i++)
	{
		scanf("%s",s[i]);
// 		printf("%s",s[i]);
	}

    char tmp[n];
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(strcmp(s[j-1], s[j])>0){
                strcpy(tmp, s[j-1]);
                strcpy(s[j-1], s[j]);
                strcpy(s[j], tmp);
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%s\n", s[i]);
		}
	return (0);
}
