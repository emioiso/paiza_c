#include <stdio.h>
#include<string.h>


int	main(void)
{
	int	n,k;

	scanf("%d%d",&n,&k);
// 	printf("%d %d\n",n,k);

    char str[n][11];
	for (int i = 0; i < n; i++){
		scanf("%s",str[i]);
// 		printf("%s ",str[i]);
	}
	char tmp[n];
	for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            if(strcmp(str[j-1], str[j]) > 0){
                strcpy(tmp, str[j-1]);
                strcpy(str[j-1], str[j]);
                strcpy(str[j], tmp);
            }
        }
    }
    // printf("\n");
    for (int i = 0; i < n; i++){
        // printf("%s ", str[i]);
        if(i == k - 1){
            printf("%s\n",str[i]);
		}
    }
	return (0);
}
