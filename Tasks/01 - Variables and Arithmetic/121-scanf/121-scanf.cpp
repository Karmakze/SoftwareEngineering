#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;
    int y = 0;
    int z = 0;

    //Prompt user
    printf("Enter your age:\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);

    printf("Enter your birth year:\n");

    int found2 = scanf_s("%d", &y);

    int z = x + y / 2;

    printf("The average is: %d\n", &z);

    //Display how many items were matched
    printf("Matched %d items\n", found);

    
    //Display what was typed in
    printf("x = %d\n", x);
}


