//Q 1 行で文字列 S が与えられるので、
//S が "paiza" である時は "YES", そうでない時は "NO" を出力してください。
//要約
//Sの文字列とpaizaという文字列を比較する。
//この問題はstrcmp関数を使う。
//strcmp関数は#include <string.h>を使う。

#include <stdio.h>
#include<string.h>

int main(void)
{
    char str[1000];
    char *moji = "paiza";

    fgets(str, sizeof(str), stdin);

    //printf("%s", str);
    //printf("%s", moji);

    if(strcmp(str,moji) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}



/*
#include <stdio.h>
int main(void)
{
	char str[1000]
	fgets()
}
*/

/*
#include <string.h>
#include <stdio.h>
//#include <stdio.h>はprintfを使うときに使う。
int main(void)
{
    char str[1000];
    //
    char *paiza = "paiza";
//char *paiza = "paiza";にchar str[1000];みたいに[1000]を定義しないのは
//*paizaでポインタにしたから。
//char *paiza = "paiza";の"paiza"で定数にした。
//C言語は文字列というデータ型がない。
//C言語は文字というデータ型がる。
//そのデータ型とはchar。

    fgets(str, sizeof(str), stdin);
    //printf("%s", str);//paiza
//fgets
    //- １行分ストリームを読み込むことができる関数
    //- 改行がくるか、終端が \0になるまで読み込まれる
//C言語
    //- 文字列型がない
        //- charの配列で実現されている
            //- 最後の要素に \0 を入れるという決まり事がある
                //- ない場合に文字列周りの関数にその文字列を入れるとバグるよ

    //printf("strcmp(%s,%s) = %d",str,str,strcmp(str, str));
    //出力結果
    //strcmp(paiza
    //,paiza) = 0
    //printf("strcmp(%s,%s) = %d",str,paiza,strcmp(str, paiza));
    //出力結果
    //strcmp(paiza
    //,paiza) = 10
    //NULL文字と改行のアスキーコードの差が10だから差分が10と表示される。



    return 0;
}
*/
//参考URL
    //http://www9.plala.or.jp/sgwr-t/lib/strcmp.html
        //省略記法
            //char str[] = "ABC";
            //↑と↓は同じ事ができる。
            //char = *str;
            //str = "ABC";
