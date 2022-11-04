/*
Q
s_1, s_2, s_3, ... s_9, s_10 の 10 個の文字列が与えられます。
文字列を与えられた順番通りに出力してください。
問題URL
https://paiza.jp/works/mondai/stdin_primer/stdin_primer__read_line_step4
*/


#include <stdio.h>
int main(void)
{
    char s_1[10+1];
    char s_2[10+1];
    char s_3[10+1];
    char s_4[10+1];
    char s_5[10+1];
    char s_6[10+1];
    char s_7[10+1];
    char s_8[10+1];
    char s_9[10+1];
    char s_10[10+1];

    scanf("%s",s_1);
    scanf("%s",s_2);
    scanf("%s",s_3);
    scanf("%s",s_4);
    scanf("%s",s_5);
    scanf("%s",s_6);
    scanf("%s",s_7);
    scanf("%s",s_8);
    scanf("%s",s_9);
    scanf("%s",s_10);

    printf("%s\n",s_1);
    printf("%s\n",s_2);
    printf("%s\n",s_3);
    printf("%s\n",s_4);
    printf("%s\n",s_5);
    printf("%s\n",s_6);
    printf("%s\n",s_7);
    printf("%s\n",s_8);
    printf("%s\n",s_9);
    printf("%s\n",s_10);

    return 0;
}

// #include <stdio.h>

// int main(void)
// {
//     char s_1[1000];
//     char s_2[1000];
//     char s_3[1000];
//     char s_4[1000];
//     char s_5[1000];
//     char s_6[1000];
//     char s_7[1000];
//     char s_8[1000];
//     char s_9[1000];
//     char s_10[1000];

//     fgets(s_1, sizeof(s_1), stdin);
//     fgets(s_2, sizeof(s_2), stdin);
//     fgets(s_3, sizeof(s_3), stdin);
//     fgets(s_4, sizeof(s_4), stdin);
//     fgets(s_5, sizeof(s_5), stdin);
//     fgets(s_6, sizeof(s_6), stdin);
//     fgets(s_7, sizeof(s_7), stdin);
//     fgets(s_8, sizeof(s_8), stdin);
//     fgets(s_9, sizeof(s_9), stdin);
//     fgets(s_10, sizeof(s_10), stdin);

//     printf("%s",s_1);
//     printf("%s",s_2);
//     printf("%s",s_3);
//     printf("%s",s_4);
//     printf("%s",s_5);
//     printf("%s",s_6);
//     printf("%s",s_7);
//     printf("%s",s_8);
//     printf("%s",s_9);
//     printf("%s",s_10);

//     return 0;
// }
