//https://paiza.jp/works/mondai/prob60/total_value_9
#include <stdio.h>
int main(void){

    int n;
    scanf("%d",&n);
    // printf("%d\n\n",n);

    int box = 0;
    int box2 = 0;

    for(int i = 0; i < n; i++){
        // printf("%d\n",i);

        int a;
        int b;

        scanf("%d%d",&a,&b);
        // printf("a=%d b=%d\n",a,b);

        if(a != b){
            box += a + b;
            // printf("box=%d\n",box);
        } else if(a == b){
            box2 += a * b;
            // printf("box2=%d\n",box2);
        }
    }
    printf("%d",box + box2);

    return 0;
}
