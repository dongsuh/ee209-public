#include <stdio.h>

int main(void) 
{
    int i = 0x172;
    short s_val = 32768;
    unsigned short u_val = 32768;
    /* signed */
    printf("Print \"32768\" as signed: %hd\n", s_val);
    /* unsigned */
    printf("Print \"32768\" as unsigned: %hu\n", u_val);
    /* signed */
    printf("Print \"32768-1\" as signed: %hd\n", s_val-1);
    /* unsigned */
    printf("Print \"32768-1\" as unsigned: %hu\n", u_val-1);

    if (i-0x173>=0) 
	 printf("true\n");
    else 
	 printf("false\n");
    return 0;
}

