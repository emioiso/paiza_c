//https://paiza.jp/works/mondai/prob60/5_or_more_4
#include <stdio.h>
int main(void)
{
    int array[8] = {4, 0, 5, -1, 3, 10, 6, -8};

    // printf("%d",array[0]);

    int i;
    int box = 0;
    for(i = 0; i < 8; i++){
        // printf(" %d",array[i]); // 4 0 5 -1 3 10 6 -8

        if(array[i] >= 5){

            box += array[i];
            // printf("%d",box);
        }
    }

    printf("%d\n",box);

    return 0;
}
