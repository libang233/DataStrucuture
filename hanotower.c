//
// Created by Libang on 2016/12/12.
//


#include <stdio.h>

void hannotower(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("%cto%c\n",a,b);
    }
    else
    {
        hannotower(n-1,a,c,b);
        printf("%cto%c\n",a,b);
        hannotower(n-1,c,b,a);
    }
}

int main()
{

    hannotower(3,'A','B','C');
    return 0;
}
