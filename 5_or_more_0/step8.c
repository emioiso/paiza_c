// https://paiza.jp/works/mondai/prob60/total_value_1
#include <stdio.h>

int main(void)
{
    char str[4];

    fgets(str,sizeof(str),stdin);
    // printf("%s",str);

    int n;
    sscanf(str,"%d",&n);
    // printf("%d\n",n);

    for(int i = 0; i < n; i++){
        char s[31];

        fgets(s,sizeof(s),stdin);
        printf("%s",s);
    }
    return 0;
}
