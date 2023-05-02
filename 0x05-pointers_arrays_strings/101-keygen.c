#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void randomvalidpasswords(int N)
{
	int i = 0;

	int randomm = 0;
	srand((unsigned int)(time(NULL)));
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[N];

	randomm = rand() % 4;
	for (i = 0; i < N; i++) {

		if (randomm == 1) {
			password[i] = numbers[rand() % 10];
			randomm = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomm == 2) {
			password[i] = symbols[rand() % 8];
			randomm = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomm == 3) {
			password[i] = LETTER[rand() % 26];
			randomm = rand() % 4;
			printf("%c", password[i]);
		}
		else {
			password[i] = letter[rand() % 26];
			randomm = rand() % 4;
			printf("%c", password[i]);
		}
	}
}


int main()
{
	int N = 10;
	randomvalidpasswords(N);

	return 0;

}
