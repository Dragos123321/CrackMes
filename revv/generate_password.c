#include <stdio.h>

int main(int argc, const char** argv) {
	char password[21];
	password[17] = '1';
	password[0] = 'A';
	password[1] = 'C';
	password[2] = 'T';
	password[3] = 'F';
	password[8] = 'c';
	password[13] = 'v';
	password[5] = 'N';
	password[6] = '0';
	password[11] = 'R';
	password[7] = '1';
	password[15] = 'r';
	password[9] = 'e';
	password[4] = '{';
	password[10] = '_';
	password[12] = '3';
	password[14] = '3';
	password[16] = '5';
	password[18] = '^';
	password[19] = 'g';
	password[20] = '}';
	password[21] = '\0';

	printf("Password: %s\n", password);

	return 0;
}
