#include <stdio.h>

int main(void)
{
    printf("hello world\n");

    // Create a string
    char YourName[30];

    // Ask the user to input some text
    printf("Enter your first name: \n");

    // Get and save the text
    scanf("%s", &YourName);

    //scanf() is for single word

    // Output the text
    printf("Hello, %s", YourName);

    return 0;

}