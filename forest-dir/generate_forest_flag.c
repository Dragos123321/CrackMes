#include <stdio.h>
#include <string.h>

int main(int argc, const char** argv) {
	char flag[14];

	flag[0] = (char)114;
	flag[1] = (char)41;
	flag[2] = (char)100;
	flag[3] = (char)50;
	flag[4] = (char)105;
	flag[5] = (char)100;
	flag[6] = (char)105;
	flag[7] = (char)110;
	flag[8] = (char)103;
	flag[9] = (char)104;
	flag[10] = (char)111;
	flag[11] = (char)111;
	flag[12] = (char)100;
	flag[13] = '\0';

	printf("Flag: %s\n", flag);
}
