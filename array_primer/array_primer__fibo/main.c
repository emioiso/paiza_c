#include <stdio.h>

int main(void)
{
    int n;
    int f0, f1, f2;

    f0 = 0;
    f1 = 1;

    scanf("%d",&n);
    // printf("%d\n",n);

	for(int i = 0; i < n; i++){
	    printf("%d\n", f0);

        f2 = f1 + f0;
        // 変数の代入
        f0 = f1;
        f1 = f2;
	}
	return(0);
}
