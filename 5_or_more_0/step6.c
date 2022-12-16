//https://paiza.jp/works/mondai/prob60/5_or_more_9
#include <stdio.h>
int main(void)
{
    int n;
    int a;

    // scanf("%d%d",&n,&a);
    scanf("%d",&n);
    // printf("%d %d",n,a);
    // printf("%d\n",n);

    int i;
    int box = 0;
    for(i = 0; i < n; i++){

        scanf("%d",&a);
        // printf("%d\n",a);

        if(a >= 5){
            box += a;
            // printf("%d",box);
        }
    }
    printf("%d\n",box);
    return 0;
}
