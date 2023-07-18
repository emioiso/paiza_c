#include <stdio.h>

int main(void)
{
    char buf[100];
    fgets(buf,sizeof(buf),stdin);
    printf("good morning %s\n", buf);

    char name[100];
    sscanf(buf,"%s",name);
    printf("Hello %s\n", name);

}


