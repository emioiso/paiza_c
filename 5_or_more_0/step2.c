// https://paiza.jp/works/mondai/prob60/5_or_more_1

#include <stdio.h>
int main(void)
{
    int n;
    int a;

    scanf("%d",&n);
    // printf("%d\n",n);

    int i;
    for(i = 1; i <= n; i++){
        scanf("%d",&a);
        printf("%d\n",a);
    }

    return 0;
}
