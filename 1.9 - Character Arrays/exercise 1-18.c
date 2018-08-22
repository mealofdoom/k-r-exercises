#include <stdio.h>
//#define MAXLINE 1000 /* maximum input line size */

#define MAXLINE 1000 /* maximum input line size */

int mygetline(char line[], int maxline);

/* print longest input line */
int main ()
{
    int len;                 /* current line length */
    int max;                 /* maximum length seen so far */
    char line[MAXLINE];      /* current input line */
    char longest[MAXLINE];   /* longest line saved here */
    
    max = 0;
    while (( len = mygetline(line, MAXLINE)) > 0); // > 1 so no blank lines    

    return 0;
}

/* mygetline: read a line into s, return length */
int mygetline (char s[], int lim)
{
    int c, i;
    
    for (i = 0; (c = getchar()) != EOF && c != '\n' && c != ' ' && c != '\t'; ++i)
    {
        putchar(c);
    }
    if (c != EOF)
        putchar('\n');
    return i;
}