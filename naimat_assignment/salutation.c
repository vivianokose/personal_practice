#include <stdio.h>

int main()
{
	printf("Hello, World!!!\n");
	printf("Warm Greetings from Crystal!\n");
	printf("It is my pleasure to meet you\n,  Tell me more about you\n");

	printf("what is your name: ");
	char name [20]; //char array of 20 characters. '\0' takes one spot
	scanf("%19s", name);

	printf("your name is: %s\n", name);
	
	printf("what is your weight: ");
	int weight;
	scanf("%d", &weight); //address-of-operator (pointer)

	printf("You chose the value %d\n", weight);

	return 0;
}
