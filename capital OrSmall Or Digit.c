#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int ascci=ch;
    if(ascci >=97 && ascci<=122)
    {
        printf("ALPHA\nIS SMALL\n",ascci);
    }
    else if(ascci >=65 && ascci<= 90)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(ascci>=48 && ascci <=57)
    {
        printf("IS DIGIT\n");
    }
}
