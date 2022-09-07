#pragma warning(disable : 6031)

#include <stdio.h>
#include <string.h>

#define strSize 100

const char* checkBalance(char str[])
{
    int roundBracketsCounter = 0;
    int squareBracketsCounter = 0;
    int triangleBracketsCounter = 0;
    int bracesCounter = 0;

    for (int i = 0; i < strlen(str); ++i)
    {
        switch (str[i])
        {
        case '(':
            ++roundBracketsCounter;
            break;
        case ')':
            --roundBracketsCounter;
            break;
        case '[':
            ++squareBracketsCounter;
            break;
        case ']':
            --squareBracketsCounter;
            break;
        case '<':
            ++triangleBracketsCounter;
            break;
        case '>':
            --triangleBracketsCounter;
            break;
        case '{':
            ++bracesCounter;
            break;
        case '}':
            --bracesCounter;
            break;
        }

        if (roundBracketsCounter < 0 || squareBracketsCounter < 0 || triangleBracketsCounter < 0 || bracesCounter < 0)
        {
            return "String is not balanced.";
        }
    }

    if (roundBracketsCounter != 0 || squareBracketsCounter != 0 || triangleBracketsCounter != 0 || bracesCounter != 0)
    {
        return "String is not balanced.";
    }
    return "String is balanced.";
}

void task3()
{
    int counter = 0;
    char str[strSize];

    printf("Enter a string consisting of brackets: ");
    scanf("%s", &str);
    printf("%s\n", checkBalance(str));
}