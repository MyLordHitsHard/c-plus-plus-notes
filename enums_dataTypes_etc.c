#include "stdio.h"
#include "stdbool.h"

enum primaryColor {red, green, blue};

double area(double width, double height) {
    return width * height;
}
double perimeter(double width, double height) {
    return 2.0 * (width + height);
}
int main() {
    
    printf("%.2f\n", area(10.11, 11.3));
    printf("%.2f\n", perimeter(10.11, 11.3));
//    printf("Hi, my name is ....");
//    int intVar = 100;
//    float floatVar = 13.6;
//    double doubleVar = 8.44e+11;
//    _Bool flag = 0;
//    bool flag2 = true;
//    enum primaryColor color1 = red;
//    if (color1 == 0) printf("yes");
}
