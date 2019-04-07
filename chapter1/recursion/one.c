#include <stdio.h>

void func1(int n);

int main() {
	int x;
	printf("Enter the integer\n");
	scanf("%d",&x);
	func1(x);
}

void func1(int n)  {
	if(n > 0) {
		printf("%d > \n ", n);
		func1(n - 1);
	}
}