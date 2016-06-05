/*
=====================================
	HW.c - First C program
	Prints out my name, and
	does simple operations.
	HW = HELLO WORLD
	5th of June, 2016

	CONFIG: UNIX 32bit
	OS:     Ubuntu 14.04
	Orgin:  TheNewBoston
=====================================
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "GTAWWEKID.h"

int main(void)
{
	char _buffer[16];
	printf("Hello from Linux\n");
	//Function to output to screen
	printf("\t-GTAWWEKID\n");
	//Using conversion characters
	printf("%s is awesome!\n", "Katy");
	//Using numbers
	printf("Whole PI = %.0f, PI = %.2f, & PI = %f\n", M_PI, M_PI, M_PI);

	int balls = 5;
	printf("\n\nCurrently have %d balls\n", balls);

	char name[15] = "Katy Pillman";

	printf("Name is %s \n", name);

	strcpy(name, "Katie Pillman");

	printf("Changed to %s \n", name);

	//Part 2

	printf("\nPRESS [ENTER] TO CONTINUE\t\n");
	getchar();

	system("clear");

	//Start user input
	printf("\tOkay, now lets get to the good stuff.\n\n");
	printf("Lets get to know you...\n\tFirst Name:\t");

	//Set VARS
	char fName[32], lName[32];
	int age;
	scanf("%s", fName);
	printf("\tLast Name:\t");
	scanf("%s", lName);
	printf("\tAge:\t\t");
	scanf("%d", &age);


	//End of GET.INFO

	printf("\n\nOkay %s %s. Thank you for your information.\n", fName, lName);

	//Keep it Legal
	int _dateAge = (age/2) + 7;
	if((_dateAge < 18) && (age >= 18))
	{
		_dateAge = 18;
	}

	printf("The appropriate dating age for you is %d or older", _dateAge );
	//Sing Song
	




	//Clean output
	printf("\n\n(C)%s, Katy Pillman(%s)\n",YEAR, USERNAME);
	return 0;
}

