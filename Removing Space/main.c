#include <stdio.h>
#include <string.h>
int main()
{
    int i,l=0,j;
    char str[100];
    printf ("Enter the string: ");
    gets(str);
    l=strlen(str);
    for(i=0; i<l; i++)
    {
        if(str[i]==' ' || str[i]=='\t')
        {
            for(j=i; j<l; j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
    }
    printf("String after removing all spaces: %s", str);
    return 0;
}
