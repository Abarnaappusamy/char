# char
#include <stdio.h>
void main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    if( (x>='a'&&x<='z')||(x>='A&&x<='Z'))
        printf("It is an alphabet");
    else
        printf("It is not an alphabet");
}

