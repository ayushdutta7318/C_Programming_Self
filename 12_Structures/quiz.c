#include <stdio.h>



    struct point

    {

        int x;

        int y;

    };

   

    void foo(struct point *p)

    {

p->x++;

                printf("%d\n", p->x);

    }


    int main()

    {

        struct point p1 = {1, 2};

        foo(&p1);

    }