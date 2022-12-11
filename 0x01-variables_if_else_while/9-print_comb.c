#include <stdio.h>

int main (void)
{
    int x;
    int n;
    for(x= '0';x<= '9' ;x++)
    {
        if (x!='9')
        {
            putchar(x);
            putchar(',');
            putchar(' ');

        }
        else
        {
            putchar('9');
        }
    }
    putchar('\n');
    return(0);
}
