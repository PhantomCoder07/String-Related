// By strlen
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf ("Enter the string: ");
    gets(str);
    printf ("Length of the string: %d\n", strlen(str));
    return 0;
}
// Without strlen
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,count=0;
    printf ("Enter the string: ");
    gets (str);
    for (i=0; str[i]!='\0'; i++)
    {
        if (str[i]!='\0')
            count++;
    }
    printf ("Total character in string is: %d\n",count);
    return 0;
}
// Or
#include <stdio.h>
int main()
{
    char str[100];
    printf ("Enter the string: ");
    gets(str);
    int i=0;
    while (str[i]!='\0')
    {
        i++;
    }
    printf("Length of the string is: %d\n",i);
    return 0;
}
