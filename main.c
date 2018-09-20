#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your letter grade: ");

    char myGrade;
    scanf("%c", &myGrade);

    switch(myGrade)
    {
    case 'A':
    case 'a':
        printf("Great job!");
        break;
    case 'B':
    case 'b':
        printf("OK job.");
        break;
    case 'F':
    case 'f':
        printf("Try harder!");
        break;
    }

    //printf("Hello world!\n");
    return 0;
}
