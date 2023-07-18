#include <stdio.h>
#include<string.h>

int	main(void)
{
	char str[3][6] = {
		"zaipa", "izapa", "paiza"
	};

	int count = 0;
    count =  sizeof(str) / sizeof(str[0]);
	// printf("%d",count);
	char tmp[6];
	for (int i = 0; i < count; i++){
		for (int j = 1; j < count; j++) {
			if (strcmp(str[j - 1], str[j]) > 0) {
				strcpy(tmp, str[j - 1]);
				strcpy(str[j - 1], str[j]);
				strcpy(str[j], tmp);
			}
		}
	}
	for (int i = 0; i < count; i++){
		printf("%s\n", str[i]);
	}
	return (0);
}
