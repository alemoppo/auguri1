#include <stdlib.h>
#include <string.h>

int main()
{
    char *p;
    p = (char *) calloc(9, sizeof(char *));
    if(!p)
        return -1;

    memset(p,10,9);

    for(;*(p+7) < 16;(*(p+7))++)
        for(*(p+8)=0;*(p+8)+10 <103;(*(p+8))++)
            (*(p+(*(p+7)-10)))++;

    while((*(p+7)=((*(p+8))-->55)?(*p)--:11)-11);

     while(*(p+8)<60)
        *(p-54+(*(p+8))++)+=(*(p+8)%2)?14:0;

    for((*(p+5))--;*(p+7);(*(p+7))--,(*(p+4))++,--(*(p+5)));

    while(*p)
        putchar(*p++);

    free(p);

    return 1;
}
