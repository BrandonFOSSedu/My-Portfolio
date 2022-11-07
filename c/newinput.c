#include <stdio.h>

int main () {
	int a;
	float f;
	char c;
	char s[64];

	printf("Please enter an integer: ");
	scanf("%i", &a);
	printf("You entered %i\n", a);
	printf("Please enter an floating point number: ");
	scanf("%f", &f);
	printf("You entered %f\n", f);
	printf("Please enter a single character: ");
	scanf(" %c", &c);
	printf("You entered %c\n", c);
	printf("Please enter a word: ");
	scanf("%s", &s);
	printf("You entered %s\n", s);

	return 0;
}
