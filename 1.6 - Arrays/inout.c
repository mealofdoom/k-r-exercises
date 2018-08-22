#include <stdio.h>

/*spits out whatever it eats */

int main ()
{
    char c;
    
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }    
}
