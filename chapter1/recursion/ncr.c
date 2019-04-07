#include <stdio.h>

int ncr(int n , int r);

int main() {
	int value = ncr(10,3);
	printf("10n3 = %d",value);
}

int ncr(int n, int r) {
	if(r == 1) {
		return n;
	}

	return ncr(n, r - 1)* (n - (r  - 1))/r;
}
