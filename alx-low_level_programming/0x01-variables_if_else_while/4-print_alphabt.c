#include <stdio.h>

int main (void)
{
    int n='a';
    for(n='a';n<='z';n++)
    {
        if((n != 'e') && (n != 'q'))
        {
            putchar(n);
        }
    }
    putchar('\n');
    return(0);
}
