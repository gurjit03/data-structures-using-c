#include <stdio.h>

int print_table(int n);

int main() {
	print_table(10);
}

int print_table(int n) {
	static int multiple = 0;
	if(n == 0) {
		return 0;
	}
	multiple++;
	int value = print_table(n - 1) + multiple;
	printf("%d x %d = %d\n", multiple, n, value);
	return value;
}