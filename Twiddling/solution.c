#include <stdio.h>

char encrypted[33] = "23hk__57l2_bwkD22232fk{Q|a5}O|b6";
int POS4[8] = {17, 9, 5, 28, 13, 10, 0, 20};
int POS3[8] = {7, 15, 22, 21, 4, 19, 23, 24};
int POS2[8] = {30, 11, 16, 3, 14, 2, 1, 8};
int POS1[8] = {18, 26, 12, 29, 6, 25, 31, 27};

int get_nr_bits_1(char ch);
void reverse_bits(char* ch1, char* ch2);
void revert(char arr[32], int pos1, int pos2);

void operation(int var) {
	int i;
	int* POS;

	if (var == 4) {
		POS = POS4;
	}

	if (var == 3) {
		POS = POS3;
	}

	if (var == 2) {
		POS = POS2;
	}

	if (var == 1) {
		POS = POS1;
	}

	// Reverse elements before change
	revert(encrypted, POS[1], POS[5]);
	revert(encrypted, POS[7], POS[6]);
	revert(encrypted, POS[1], POS[3]);

	for (i = 7; i >= 0; --i) {
		// We change each character having an odd number of 1s in it's binery representation
		// Such that ch = new_ch ^ nr_ones(new_ch), where is ^ is the XOR operation
		if (get_nr_bits_1(encrypted[POS[i]]) % 2 == 1) {
			//printf("%c\n", encrypted[POS[i]]);
			switch(encrypted[POS[i]]) {
				case 'b':
					encrypted[POS[i]] = 'a';
					break;
				case '2':
					encrypted[POS[i]] = '1';
					break;
				case 'O':
					encrypted[POS[i]] = 'L';
					break;
				case 'k':
					encrypted[POS[i]] = 'h';
					break;
				case '|':
					encrypted[POS[i]] = 'y';
					break;
				case '7':
					encrypted[POS[i]] = '4';
					break;
				case 'Q':
					encrypted[POS[i]] = 'R';
					break;
				case 'a':
					encrypted[POS[i]] = 'b';
					break;
				case 'h':
					encrypted[POS[i]] = 'm';
					break;
				case 'y':
					encrypted[POS[i]] = '4';
					break;
			}
		}
	}

	// Revert elements after change
	revert(encrypted, POS[0], POS[3]);
	revert(encrypted, POS[4], POS[2]);
	revert(encrypted, POS[2], POS[7]);
}

void revert(char arr[32], int pos1, int pos2) {
	char aux = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = aux;
}

int get_nr_bits_1(char ch) {
	int nr_1 = 0;
	while (ch) {
		if (ch & 1) {
			nr_1 = nr_1 + 1;
		}

		ch >>= 1;
	}

	return nr_1;
}

int main() {
	operation(4);
	operation(3);
	operation(2);
	operation(1);

	encrypted[0] = 'f';
	encrypted[1] = 'l';
	encrypted[2] = 'a';
	encrypted[3] = 'g';

	printf("Flag: %s\n", encrypted);

	return 0;
}
