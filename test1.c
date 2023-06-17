#include <stdio.h>

int main(void)
{
	char *alpha = "abcdefjhijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alpha[i]; i++)
		;
	printf("la taille de alpha egale %d \n", i);

	for (i = 0; i < 26; i++)
	{
		if (i == 0)
			printf("%c is %dst alphabet\n", alpha[i], i + 1);
		else if (i == 1)
			printf("%c is %dnd alphabet\n", alpha[i], i + 1);
		else if (i == 2)
			printf("%c is %drd alphabet\n", alpha[i], i + 1);
		else 
			printf("%c is %dth alphabet\n", alpha[i], i + 1);
	}
	return 0;
}
