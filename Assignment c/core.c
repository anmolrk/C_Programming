/*
*****************************************************************************
                        Assignment 1 - Milestone 2
Full Name  :
Student ID#:
Email      :
Section    :
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//
// Copy your work done from Milestone #1 (core.c) into this file
// - Organize your functions in the same order as they are listed in the core.h file
// - Also copy the commented "sections" to help with finding functions quickly!
//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include"core.h"


void clearInputBuffer(void)
{
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}

// Wait for user to input the "enter" key to continue
void suspend(void)
{
    printf("<ENTER> to continue...");
    clearInputBuffer();
    putchar('\n');
}

int inputInt() {

    int num;
    char term;
    do {
        scanf("%d%c", &num, &term);
        if (term != '\n') {
            printf("Error! Input a whole number: ");
            clearInputBuffer();
        }
    } while (term != '\n');

    return num;
}

int inputIntPositive() {
    int num;
    do {
        num = inputInt();
        if (num <= 0) {
            printf("ERROR! Value must be > 0: ");
        }
    } while (num <= 0);

    return num;
}

int inputIntRange(int lowbound, int upbound) {
    int num;
    do {
        num = inputInt();
        if (num < lowbound || num > upbound) {
            printf("ERROR! Value must be between %d and %d inclusive: ", lowbound, upbound);
        }
    } while (num < lowbound || num > upbound);
    return num;
}

char inputCharOption(const char charArray[]) {
    char input;
    char term;
    bool match = false;
    do {
        scanf("%c%c", &input, &term);
        char temp = charArray[0];
        int count = 0;
        while (temp != 0)
        {
            if (input == temp) {
                match = true;
                break;
            }
            count++;
            temp = charArray[count];
        }
        if (match == false) {
            printf("ERROR: Character must be one of [%s]: ", charArray);
        }
    } while (match == false);
    return input;
}

void inputCString(char* charArray, int min, int max) {
    char input[20];
    bool match = false;
    do {
        fgets(input, sizeof(input), stdin);
        int count = strlen(input) - 1;
        if (min == max) {
            if (count == min) {
                strcpy(charArray, input);
                match = true;
            }
            else {
                printf("ERROR: String length must be exactly %d chars: ", min);
            }
        }
        else {
            if (count > max) {
                printf("ERROR: String length must be no more than %d chars: ", max);
            }
            else if (count < min) {
                printf("ERROR: String length must be between %d and %d chars: ", min, max);
            }
            else {
                strcpy(charArray, input);
                match = true;
            }
        }
    } while (match == false);
}

void displayFormattedPhone(const char* num) {
    int i;
    bool match = false;
    if (num != NULL) {
        int len = strlen(num);
        if (len == 10) {
            int temp;
            for (i = 0; i < 10; i++) {
                temp = num[i] - 48;
                if (temp >= 0 && temp <= 9) {
                    match = true;
                }
                else {
                    match = false;
                    break;
                }
            }
            if (match == true) {
                printf("(%c%c%c)%c%c%c-%c%c%c%c", num[0], num[1], num[2], num[3],
                    num[4], num[5], num[6], num[7], num[8], num[9]);
            }
        }
    }
    if (match == false) {
        printf("(___)___-____");
    }
}

