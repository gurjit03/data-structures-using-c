#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TRIT = 3;

int convert_to_decimal_format(char *str);
char * convert_decimal_to_trit_form(int decimal_num);

int main() {
	char choice, binary_input[20];
	int decimal_num;
	printf("Enter the string in binary input \n");
	scanf(" %s",&binary_input);
	decimal_num = convert_to_decimal_format(binary_input);	
	printf("\nThe String you entered is %s %d\n",binary_input,decimal_num);
}

char * convert_decimal_to_trit_form(int decimal_num) {
	int remainder = 0, factor = 0;
	char * trit_string;

	while(decimal_num >= 0) {
		remainder = decimal_num % TRIT;
		factor = decimal_num/TRIT;
	}
}

int convert_to_decimal_format(char *str) {
	printf("You entered a string %s \n",str);
	int decimal_input, bin_pos_counter, counter;
	// Get the total length of string
	bin_pos_counter = strlen(str) - 1;

	decimal_input = 0;
	
	for (counter = 0; str[counter] != '\0'; ++counter) {
		char ch = str[counter];
		decimal_input += pow(2, bin_pos_counter) * atoi(&ch);
		--bin_pos_counter;
	}

	return decimal_input;
}

