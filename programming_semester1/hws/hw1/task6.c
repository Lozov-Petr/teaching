#pragma warning(disable : 6031)

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define strSize 40

void task6()
{
    char s[strSize] = { '\0' };
    char s1[strSize] = { '\0' };

    printf("Enter first line: ");
    scanf("%s", &s);

    printf("Enter second line: ");
    scanf("%s", &s1);

    int counter = 0;
    bool different = false;
    const unsigned lengthS1 = strlen(s1);
    const unsigned border = strlen(s) - lengthS1 + 1;

    for (unsigned i = 0; i < border; ++i)
    {
        for (unsigned j = 0; j < lengthS1; ++j)
        {
            if (s[i + j] != s1[j])
            {
                different = true;
                break;
            }
        }

        if (!different)
        {
            ++counter;
        }

        different = false;
    }
    printf("The second line occurs %d times in the first line.\n", counter);
}