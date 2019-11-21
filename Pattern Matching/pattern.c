/**
    User can any input number/string if the number/string contain '000'
    consecutively it will print 'Magic' Other wise it will print 'Not Satisfied'

    Ex:
    Input:  0011001000   ,   00111010
    Output:   Magic        Not Satisfied

**/

#include<stdio.h>
int main()
{
    int index;
    char c[20];
    scanf("%s", c);
    index=indexOfString(c, "000");
    if (index==-1)
        printf("Not Satisfied\n");
    else
        printf("Magic\n", index);
}
int indexOfString(char str[],char s[])
{
    int i, j, k, l;
    l=strlen(s);
    for(i=0; i<=str[i+l-1]; i++)
    {
        k=i;
        for(j=0; j<=l-1; j++)
        {
            if(str[k]!=s[j])
                break;
            k++;
        }
        if(j==l)
            return (i);
    }
    return (-1);
}
