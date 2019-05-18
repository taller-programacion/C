#include <stdio.h>
void funA(char num);
void funB(char num);

int main(void)
{
	funA('Z'); 
	return 0;
}
void funA(char num)
{
	if (num > 'A') 
		funB(num);
	printf("%c ,", num);
}
void funB(char num)
{
	funA(--num); 
}
