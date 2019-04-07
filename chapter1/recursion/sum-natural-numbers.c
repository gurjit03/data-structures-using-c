#include <stdio.h>

int sum_natural_numbers(int num);

int main() {
	int n = 3;
	int x = sum_natural_numbers(n);
	printf("The sum of first %d natural numbers is %d \n", n, x);
}

int sum_natural_numbers(int num) {
	if(num == 0) {
		return 0;
	}

	return sum_natural_numbers(num - 1) + num;
}