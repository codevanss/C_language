#include<stdio.h>
#define MAX 20
void isPalindrome(char *str)
{
    int len,isNotsame=0,len2=0;
    char str2[MAX];
    // for ( len = 0; str[len] !='\0'; len++);
    for ( len = 0; str[len] !='\0'; len++)
    {
        len2++;
    }
    printf(" len = %d \n",len);

    for(int j=len-1;j>=0;j--)
    {
        str2[len-j-1]=str[j];
    }
    str2[len]='\0';
    for (int k = 0; k < len; k++)
    {
        if(str[k]!=str2[k])
        {
            isNotsame=1;
        }
    }
    if (isNotsame)
    {
        printf("not palindrome");
    }
    else
    {
        printf("palindrome");
    }
    // printf(" %s \n",str2);
}
int main()
{
    isPalindrome("MoM");
    isPalindrome("Women");
    isPalindrome("naman");
    isPalindrome("nitin");
    isPalindrome("Aman");
    
    return 0;
}
