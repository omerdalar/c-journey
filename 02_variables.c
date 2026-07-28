#include <stdio.h>

int main() {
    // Defining age and first_letter variables
    int age = 23;
    char first_letter = 'A';

    // %d prints int, %c prints char, \n moves to next line
    printf("age = %d\n", age);
    printf("first_letter = %c\n", first_letter);

    // Adding 3 to age and updating it
    age = age + 3;
    printf("new_age = %d\n", age);

    return 0;
}