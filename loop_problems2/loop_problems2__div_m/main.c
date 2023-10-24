#include <stdio.h>
int main(void){
    int n,m;
    scanf("%d%d",&n,&m);
    
    int count = 0;
    while(n % m == 0){
        count++;
        n /= m;
    }
    printf("%d\n",count);
}
