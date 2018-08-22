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
    while (( len = mygetline(line, MAXLINE)) > 0)
        if (len >= 80)
        {
            printf ("%s\n", line);
        }        

    return 0;
}

/* mygetline: read a line into s, return length */
int mygetline (char s[], int lim)
{
    int c, i;
    
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (i < lim - 1)
            s[i] = c;
    }
    if (i == 0 && c == '\n') //counts newlines only when alone in a line (aka a blank line)
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}