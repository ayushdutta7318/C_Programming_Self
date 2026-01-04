/*Break And Continue*/

#include <stdio.h>

int main()
{

    enum Day
    {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
    };

    for (enum Day day = monday; day <= sunday; day++)
    {
        if (day == tuesday)
        {
            continue;
        }
        else if (day == saturday)
        {
            break;
        }
        else
        {
            printf("todays is %d\n", day);
        }
    }
    return 0;
}
