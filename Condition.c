/*This program demonstrates the use of:

- If statements
- If-else statements
- If-else-if statements
- Nested if statements
- Switch case statements
- For loops
- Nested for loops
- While loops
- Do-while loops
- Break and continue statements
*/


#include <stdio.h>

int main() {
	// If statement
	if (1 == 1) {
		printf("If statement: True\n");
	}

	// If-else statement
	int a = 10;
	if (a > 10) {
		printf("If-else statement: a is greater than 10\n");
	} else {
		printf("If-else statement: a is less than or equal to 10\n");
	}

	// If-else-if statement
	int b = 20;
	if (b > 20) {
		printf("If-else-if statement: b is greater than 20\n");
	} else if (b == 20) {
		printf("If-else-if statement: b is equal to 20\n");
	} else {
		printf("If-else-if statement: b is less than 20\n");
	}

	// Nested if statement
	int c = 30;
	if (c > 30) {
		if (c > 40) {
			printf("Nested if statement: c is greater than 40\n");
		}
		} else {
		printf("Nested if statement: c is less than or equal to 30\n");
	}

	// Switch case statement
	int d = 40;
	switch (d) {
		case 10:
			printf("Switch case statement: d is equal to 10\n");
			break;
		case 20:
			printf("Switch case statement: d is equal to 20\n");
			break;
		case 40:
 printf("Switch case statement: d is equal to 40\n");
			break;
		default:
			printf("Switch case statement: d is not equal to 10, 20, or 40\n");
	}

	// For loop
	for (int i = 0; i < 5; i++) {
		printf("For loop: Iteration %d\n", i);
	}

	// Nested for loop
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Nested for loop: Iteration (%d, %d)\n", i, j);
		}
	}

	// While loop
	int e = 0;
	while (e < 5) {
		printf("While loop: Iteration %d\n", e);
e++;
	}

	// Do-while loop
	int f = 0;
	do {
		printf("Do-while loop: Iteration %d\n", f);
		f++;
	} while (f < 5);

	// Break and continue statements
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;
		}
		printf("Break and continue statement: Iteration %d\n", i);
		if (i == 3) {
			continue;
		}
		printf("Break and continue statement: Iteration %d (continued)\n", i);
	}

	return 0;
}
