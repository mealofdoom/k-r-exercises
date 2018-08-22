#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outinside a word */

#define MAXWORDSIZE 50


/*count lines, words, and characters in input */

int main ()
{
    int wordcounts[MAXWORDSIZE];
    int wordsize;
    int i,j;
    int c, nl, nw, nc, state;

    wordsize = 0;
    
    state = OUT;
    nl = nw = nc = 0;

    for (i = 0; i < MAXWORDSIZE; ++i)
        wordcounts[i] = 0;

    while ((c = getchar()) != EOF)
    {

        if ( c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                wordcounts[wordsize]++;
            }
            state = OUT;
            wordsize = 0;
        }
        else if (state == IN)
            ++wordsize;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
            ++wordsize;
        }
    }

    for (i = 0; i < MAXWORDSIZE; ++i)
    {
        printf("%d\t: ", i);
        for (j = 0; j < wordcounts[i]; ++j)
        {

            putchar('=');
        }
        printf("\n");   
    }
}
