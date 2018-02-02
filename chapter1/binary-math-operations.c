#include <stdio.h>

int convert_to_decimal_format(char *str);

int main() {
	char binary_input[20];
	int decimal_num,decimal_num2;
	scanf("%s", binary_input);
		
	decimal_num = convert_to_decimal_format(binary_input);
	
	return 0;	
}

int convert_to_decimal_format(char *str) {
	printf("You entered a string %s \n",str);
	return 0;
}
