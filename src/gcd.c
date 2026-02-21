#include "stdio.h"
#include <stdlib.h>

//Функция для нахождения НОД
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char *argv[])
{
	if (argc != 3){
		printf("Укажите 2 целых числа, чей НОД нужно найти!\n", argv[0]);
		return 1;
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("НОД от чисел: %d и %d = %d\n", a, b, gcd(a, b));
	return 0;

}
