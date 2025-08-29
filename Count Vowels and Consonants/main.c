#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],ch;
    int i,l,v=0,c=0;
    printf("Enter the string: ");
    gets(str);
    l= strlen(str);
    for(i=0; i<l; i++)
    {
        ch=str[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
               ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'  )
                v++;
            else
                c++;
        }
    }
    printf("Total number of Vowel: %d\n",v);
    printf("Total number of Consonant: %d\n",c);
    return 0;
}
