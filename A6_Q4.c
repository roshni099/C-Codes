//This program is assign your name to array and replace every character to next character.
#include<stdio.h>
int main()
{
	int i;
    char c[]={'R', 'O', 'S', 'H' ,'N', 'I'};
    for( i=0;i<6; i++)
    {
       c[i]=c[i]+1;
       printf("%c", c[i]);
    }
    return 0;
}
