// Starrev function
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf ("Enter the string: ");
    gets(str);
    printf ("The reverse string: %s", strrev(str));
    return 0;
}
// Without using strrev()
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,l;
    printf ("Enter the string: ");
    gets (str);
    l=strlen(str);
    printf ("The reverse string:");
    for (i=l; i>=0; i--)
    {
        printf ("%c",str[i]);
    }
    return 0;
}
// Using recursion
#include <stdio.h>
#include <string.h>
int reverse (char s[], int n)
{
    if (n==0)
        return 1;
    printf("%c",s[n-1]);
    return reverse(s,n-1);
}
int main()
{
    char str[100];
    printf ("Enter the string: ");
    gets(str);
    int l=strlen(str);
    printf("The reverse string: ");
    reverse(str,l);
    return 0;
}
