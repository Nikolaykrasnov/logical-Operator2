#include <stdio.h>

int main()
{
	int pin1, pin2;
	printf("pin1=");
	scanf_s("%i", &pin1);
	printf("pin2=");
	scanf_s("%i", &pin2);

	if (((pin1 == 123) && (pin2 == 321)) || ((pin1 == 456) && (pin2 == 654)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}