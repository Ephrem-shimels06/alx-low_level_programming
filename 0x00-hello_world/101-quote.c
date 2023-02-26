#include<stdio.h>
/**
 * It prints the sentence stored at a variable strr
 *
 * retruns 1
 */
 
int main(void)
{
 char* strr = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i = 0;
while( i < 58)
{
putchar(strr[i]);
i++;
}
return (1); 
}
