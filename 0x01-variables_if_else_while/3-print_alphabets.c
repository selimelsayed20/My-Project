#include <stdio.h>

int main (void)
{
    int n, x;
    for(n='a';n<='z';n++)
    {
        putchar(n);
    }
    for(x='A';x<='Z';x++)
    {
        putchar(x);
    }
    putchar('\n');
    return(0);
}
