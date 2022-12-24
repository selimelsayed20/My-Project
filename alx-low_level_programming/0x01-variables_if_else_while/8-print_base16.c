#include <stdio.h>

int main (void)
{
    int x;
    int n;
    for(x= '0';x<= '9' ;x++)
    {
        putchar(x);
    }
    for(n= 'a';n<= 'f';n++)
    {
        putchar(n);

    }
    putchar('\n');
    return(0);
}
