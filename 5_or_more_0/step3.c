//https://paiza.jp/works/mondai/prob60/5_or_more_2

#include <stdio.h>
int main(void)
{
    int array[10] = {1, 3, 5, 6, 3, 2, 5, 23, 2}; //50

    // printf("%d",array[0]);

    int i;
    int box = 0;
    for(i = 0; i < 9; i++){
        // printf(" %d\n",array[i]); // 1 3 5 6 3 2 5 23 2

        box += array[i];
    }

        printf("%d\n",box);

    return 0;
}
