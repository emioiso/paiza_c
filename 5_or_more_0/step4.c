//https://paiza.jp/works/mondai/prob60/5_or_more_3
#include <stdio.h>
int main(void)
{
    int n;

    scanf("%d",&n);
    // printf("%d",n);

    if(n >= 5){
        printf("high\n");
    } else {
        printf("low\n");
    }

    return 0;
}
