#include <stdio.h>

int main()
{

    int grades[10];
    int count = 10;
    int sum = 0;
    float avg = 0.0f;

    printf("\nEnter 10 grades\n");

    int i;
    for (i = 0; i < count; i++)
    {
        printf("%2u\n", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    printf("The sum is: %g\n", sum);
    avg = (float)sum/count;
    printf("The average is: %.2f", avg);

    return 0;
}