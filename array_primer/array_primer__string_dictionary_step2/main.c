#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[6][10];

    for (int i = 0; i < 5; i++) {
        scanf("%s", str[i]);
    }

    char tmp[10];
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(tmp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tmp);
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
