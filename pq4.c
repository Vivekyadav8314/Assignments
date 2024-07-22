
#include <stdio.h>
#include <string.h>

int main() 
{
    char name[50];
    int age;
    float salary;
    char sentence[100];

    // Demonstrating printf() and scanf() for basic input and output
    printf("Enter your name: ");
    scanf("%s", name);  // Read a string input (ignores spaces)
    
    printf("Enter your age: ");
    scanf("%d", &age);  // Read an integer input
    
    printf("Enter your salary: ");
    scanf("%f", &salary);  // Read a float input

    // Displaying user information using printf()
    printf("\n--- User Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);

    // Using fgets() and puts() to handle string input/output
    printf("\nEnter a sentence (up to 99 characters): ");
    getchar();  // Clear input buffer
    fgets(sentence, sizeof(sentence), stdin);  // Read a line of input including spaces

    // Displaying the sentence entered by the user using puts()
    printf("You entered: ");
    puts(sentence);  // Output the string

    return 0;
}
