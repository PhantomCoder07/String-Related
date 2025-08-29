#include <stdio.h>
int main()
{
    char str[100],pch;
    int i=0,w=0;
    printf ("Enter the string: ");
    gets(str);
    while (1)
    {
        if (str[i]==' ' || str[i]=='\n' || str[i]=='\t' || str[i]=='\0')
        {
            if (pch!=' ' && pch!='\n' && pch!='\t' && pch!='\0')
            {
                w++;
            }
        }
        pch=str[i];
        if (str[i]=='\0')
            break;
        else
            i++;
    }
    printf ("Total words in the sentence: %d\n",w);
    return 0;
}
