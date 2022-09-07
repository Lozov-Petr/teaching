#define sums 28

#include <stdio.h>

void task2()
{
    int sumCounts[sums] = { 0 };

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            for (int k = 0; k < 10; ++k)
            {
                ++sumCounts[i + j + k];
            }
        }
    }

    int count = 0;
    for (int i = 0; i < sums; ++i)
    {
        count += sumCounts[i] * sumCounts[i];
    }

    printf("Lucky tickets count: %d.\n", count);
}