/**************************************************
		W2U (Win/DOS to Unix/Linux)
	Created by GTAWWEKID; NON-PROFIT USE!
	=====================================
	USE: w2u [Win32 CMD]
	EX:  w2u cls
	-------------------------------------
	  This script takes in Win32 commands
	and executes a linux equilavent. :D

	ToDo:
	~Add multiple options
	~Create reverse command (U2W)
	~Fix 2D CHAR ARRAY
***************************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
	// cmd Win32 -- Unix
	char *cmd[50][50] = {
	{ "cls" , "clear" },
	{ "ipconfig" , "ifconfig" },
	{ "dir" , "ls -A -l" },
	{ "tree" , "ls -R"},
	//Other commands require smart extension input

	//default fall
	{ "?" , "?"}
	};

	//Get COMMAND AND CONVERT; THAN OUTPUT.
	if( argc == 2 ) {
		int look = 1; int section = 0;
		do{
			//Loop through selections (BRUTE-FORCE)
			if(*cmd[section][0] == *argv[1]){system(cmd[section][1]);look--;}
			else if(cmd[section][0] == "?"){look--;}
			else{section++;}

		}while( look == 1);
	}
   	else {
      		printf("USE: w2u [Win32 Command]\n");
   	}
	return 0;
}

