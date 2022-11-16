// ===== 問題URL =====
// https://paiza.jp/works/mondai/array_primer/array_primer__1dmatrix_input_step3
// Q
// 1 行目に整数 N が与えられます。
// 2 行目に、N 個の整数 a_i (1 ≤ i ≤ N) が半角スペース区切りで与えられます。
// この数列の全要素を改行区切りで出力してください。

#include <stdio.h>

int main(void)
{
    // char buf[100];
    int N;
    int a_i[100];
    int i;

    // fgets(buf, sizeof(buf), stdin);
    // sscanf(buf,"%d", &N);
    // printf(buf,"%d\n",N);   //5

    // fgets(buf, sizeof(buf), stdin);
    // sscanf(buf,"%d", &a_i);
    // printf(buf,"%d\n",a_i); //1 2 3 4 5

    scanf("%d",&N);
    // printf("%d\n",N);

    for(i = 0; i < N; i++){
        scanf("%d",&a_i[i]);
        printf("%d\n",a_i[i]);
    }
    return 0;
}
