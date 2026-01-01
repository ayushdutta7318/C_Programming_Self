#include <stdio.h>

int main(){
    //decl var
    double width, height, perimeter, area;

    //store val
    width = 25;
    height = 10;
    perimeter = 2 *(width+height);
    area = width*height;

    printf("width and height of rectangle %g and %g respectively\n", width, height);
    printf("The perimeter of the rectangle is %g\n", perimeter);
    printf("The area of the rectangle is %g\n", area);

    return 0;
}