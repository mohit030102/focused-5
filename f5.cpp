/*
* FILE : f5.cpp
* PROJECT : SENG1000 - Focus Assignment #5
* PROGRAMMER : Mohit Chodavdeeya
* FIRST VERSION : 2024-02-23
* DESCRIPTION : Demonstrate a program that get integers from the user and determines the integer which has high value with array as parameters.
*/

#include <stdio.h>

int getNum(void);
void modifyArrayValues(int total[], int numberOfElements);
int maxArrayValue(int total[], int numberOfElements);

int main()

{
    // Declaration of array
    int value[10];
   
    return 0;
}

// getNum() function to obtain input from user
int getNum()
{
    int M;
    scanf_s("%d", &M);
    return M;
}

// Function for edit values of array as user input
void modifyArrayValues(int total[], int numberOfElements)
{
    printf("Enter %d numbers, pressing ENTER after each:\n", numberOfElements);
    for (int x = 0; x < numberOfElements; x++)
    {
        total[x] = getNum();
    }
}

