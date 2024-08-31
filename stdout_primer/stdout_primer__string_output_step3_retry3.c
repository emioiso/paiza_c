#include <stdio.h>

int main(void)
{
    char s[11];
    char t[11];

    fgets(s,sizeof(s),stdin);
    fgets(t,sizeof(t),stdin);
    printf("%s",s);    
    printf("%s",t);                

    return 0;
}
