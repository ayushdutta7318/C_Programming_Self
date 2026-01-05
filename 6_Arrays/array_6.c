/*multi dimension array*/

#include <stdio.h>

int main()
{

    // similar to matrix in math

    //not necessary to be initialized
    int matrix[4][5] = {
        {1, 2, 3, 4, 5}, //1st row
        {6, 7, 8, 9, 10}, //2nd row
        {11, 12, 13, 14, 15},//3rd row
        {16, 17, 18, 19, 20} //4th row
    };

    //designated initializer:
    int mat[3][3] = {[0][0]=1, [0][1]=5, [0][2]=3};

    //3d arr: tedious to understand and vizualize, avoid 3d 4d arr.
    int m[2][3][4] = {
        {1,2,3}, {
            {1,2,3}
        }
    };
    return 0;
}