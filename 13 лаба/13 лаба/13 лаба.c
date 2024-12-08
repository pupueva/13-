//лаба 13
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define CRT_NO_SECURE_DEPRECATE

//для верхнего регистра
void zagl(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = toupper(str[i]);
	}
}


void _with_40_chars(char* Name) {
    char Snew[40] = "Hello, ";
    strcat(Snew, Name);
    int current_length = strlen(Snew);
    while (current_length < 40) {
        Snew[current_length] = '!';
        current_length++;
    }
    Snew[40] = '\0'; // Завершающий символ строки
    printf("%s\n", Snew);
}



int main()
{
	setlocale(LC_CTYPE, "RUS");
	char Snew[20];
	char Name[40] = "hello";
	printf("Приглашение к вводу имени");
	scanf_s("%s", Name);
	strcat(Snew, Name);
	printf("%s!", Snew);


}