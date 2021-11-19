#include <stdio.h>

int main(int argc, const char** argv) {
	char password[11];
	char original_str[11] = "bpfajgobiw";

	int i;
	for (i = 0; i <= 6; ++i) {
		password[i] = original_str[i + 3];
	}

	password[7] = original_str[0];
	password[8] = original_str[1];
	password[9] = original_str[2];
	password[10] = '\0';

	printf("Flag: %s\n", password);

	return 0;
}
