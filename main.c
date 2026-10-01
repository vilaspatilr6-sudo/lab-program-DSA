#include <stdio.h>
#include <stdlib.h>
void TOH(int n,char source,char dist,char temp)
{
    if(n>1)
    {
        TOH(n-1,source,temp,dist);
        printf("\n MOVE %d disc from %c to %c",n,source,dist);
        TOH(n-1,temp,dist,source);
    }
    else
        printf("\n MOVE %d disc from %c to %c",n,source,dist);
}
int main()
{
    int n;
    printf("\n read no of discs:");
    scanf("%d",&n);
    TOH(n,'S','D','T');
    return 0;
}
