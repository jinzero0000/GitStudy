#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	srand(time(NULL));

	int ans, tans;
	int a, b, c;
	char calc[4] = { '+', '-', '*', '/' };
	int score = 1;

	while (score <= 10) {
		a = rand() % 20 + 1;
		b = rand() % 20 + 1;
		c = rand() % 4;

		printf("");
		scanf("%d", &ans);

		switch (c){
		case 0:
			tans = a + b;
			if (tans == ans) {
				printf("Correct!");
				score++;
			}
			else {
				printf("Wrong! Answer is %d.", tans);
			}
			break;
		case 1:
			tans = a - b;
			if (tans == ans) {
				printf("Correct!");
				score++;
			}
			else {
				printf("Wrong! Answer is %d.", tans);
			}
			break;
		case 2:
			tans = a * b;
			if (tans == ans) {
				printf("Correct!");
				score++;
			}
			else {
				printf("Wrong! Answer is %d.", tans);
			}
			break;
		case 3:
			tans = a / b;
			if (tans == ans) {
				printf("Correct!");
				score++;
			}
			else {
				printf("Wrong! Answer is %d.", tans);
			}
			break;
		}
	}

	return 0;
}