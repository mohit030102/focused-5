/*
* FILE : f5.cpp
* PROJECT : SENG1000 - Focus Assignment #5
* PROGRAMMER : Mohit Chodavdeeya  Student id : 8963902
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

// Function for find maximum value in index
int maxArrayValue(int total[], int numberOfElements)
{
    int hi = 0;
    for (int x = 1; x < numberOfElements; x++)
    {
        if (total[x] > total[hi])
        {
            hi = x;
        }
    }
    return hi;
}
