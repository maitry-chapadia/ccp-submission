// PRACTICAL 7
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18)
        printf("Tickets for children are free\n");
    else if (age >= 18 && age < 50)
        printf("Ticket price is 300\n");
    else if (age >= 50)
        printf("Senior citizens are not allowed\n");
        printf("maitry chapadia_25ce013");

    return 0;
}
