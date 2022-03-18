#include <stdio.h>
#include <ctype.h>
int main(void) 
{
    int c;
    while ((c=getchar()) && isspace(c))
        printf("%c s\n",c);
    return 0;
}

