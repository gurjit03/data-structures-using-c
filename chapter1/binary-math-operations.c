#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int convert_to_decimal_format(char *str);
int addition(char *bin1, char *bin2);
int subtract(char *bin1, char *bin2);
int divide(char *bin1, char *bin2);
int multiply(char *bin1, char *bin2);

int main() {
	char binary_input[20],binary_input2[20];
	int decimal_num,decimal_num2;
	char choice,ans;
	do {
		printf("Enter your choice\n");
		printf("1. To add 2 binary numbers \n");
		printf("2. To subtract 2 binary numbers \n");
		printf("3. To divide 2 binary numbers \n");
		printf("4. To divide 2 binary numbers \n");
		printf("Your choice is ");
		scanf(" %c", &choice);

		printf("Enter binary input 1 \n");
		scanf(" %s",&binary_input);
		printf("Enter binary input 2 \n");	
		scanf(" %s",&binary_input2);
		switch(choice) {
			case '1': printf("\n addition of two numbers is %d", addition(binary_input,binary_input2));
			break;
			case '2': printf("\n subtraction of two numbers is %d", subtract(binary_input,binary_input2));
			break;	
			case '3': printf("\n divide of two numbers is %d", divide(binary_input,binary_input2));
			break;
			case '4': printf("\n multiply of two numbers is %d", multiply(binary_input,binary_input2));
			break;	
			default: printf("\n Try again later or quit the program");
		}
		printf("\nPress q to quit the program ");
		scanf(" %c", &ans);
	}while(ans != 'q');

    return 0;	
}

int addition(char *bin1, char *bin2) {
	int decimal1 = convert_to_decimal_format(bin1);
	int decimal2 = convert_to_decimal_format(bin2);
	return decimal1 + decimal2;
}

int subtract(char *bin1, char *bin2) {
	int decimal1 = convert_to_decimal_format(bin1);
	int decimal2 = convert_to_decimal_format(bin2);
	return decimal1 - decimal2;
}

int divide(char *bin1, char *bin2) {
	int decimal1 = convert_to_decimal_format(bin1);
	int decimal2 = convert_to_decimal_format(bin2);
	return decimal1/decimal2;
}

int multiply(char *bin1, char *bin2) {
	int decimal1 = convert_to_decimal_format(bin1);
	int decimal2 = convert_to_decimal_format(bin2);
	return decimal1 * decimal2;
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


