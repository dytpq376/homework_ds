#include <stdio.h>
void main() {
	char str[26];
	printf("알파벳 대문자를 입력해주세요:");
	scanf("%s", str);
	for(int i =0; i<27; i++){
	if (str[i] == 'A') {
		printf(".-");
	}
	else if (str[i] == 'B') {
		printf("-...");
	}
	else if (str[i] == 'C') {
		printf("-.-.");
	}
	else if (str[i] == 'D') {
		printf("-..");
	}
	else if (str[i] == 'E') {
		printf(".");
	}
	else if (str[i] == 'F') {
		printf("..-.");
	}
	else if (str[i] == 'G') {
		printf("--.");
	}
	else if (str[i] == 'H') {
		printf("....");
	}
	else if (str[i] == 'I') {
		printf("..");
	}
	else if (str[i] == 'J') {
		printf(".---");
	}
	else if (str[i] == 'K') {
		printf("-.-");
	}
	else if (str[i] == 'L') {
		printf(".-..");
	}
	else if (str[i] == 'M') {
		printf("--");
	}
	else if (str[i] == 'N') {
		printf("-.");
	}
	else if (str[i] == 'O') {
		printf("---");
	}
	else if (str[i] == 'P') {
		printf(".--.");
	}
	else if (str[i] == 'Q') {
		printf("--.-");
	}
	else if (str[i] == 'R') {
		printf(".-.");
	}
	else if (str[i] == 'S') {
		printf("...");
	}
	else if (str[i] == 'T') {
		printf("-");
	}
	else if (str[i] == 'U') {
		printf("..-");
	}
	else if (str[i] == 'V') {
		printf("...-");
	}
	else if (str[i] == 'W') {
		printf(".--");
	}
	else if (str[i] == 'X') {
		printf("-..-");
	}
	else if (str[i] == 'Y') {
		printf("-.--");
	}
	else if (str[i] == 'Z') {
		printf("--..");
	}

	}
}