#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],ch;
    int i,count=0,l;
    printf ("Enter the string: ");
    gets (str);
    l= strlen(str);
    printf ("Enter character to search: ");
    scanf ("%c",&ch);
    for (i=0; i<l; i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    if (count==0)
        printf ("The character is not found\n");
    else
        printf("Total occurrence of the character '%c': %d times\n",ch,count);
    return 0;
}
