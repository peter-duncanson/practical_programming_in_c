#include <stdio.h>
#include <stdbool.h>

// returns the cube root of a real number
// by Newton apprximation
double cube_root(double x);
double cubeRoot(double x);
double squareRoot(double x);

int main(void)
{
    double a;
    // printf("Enter a number for cube root: ");
    // scanf("%lf", &a);
    // printf("The cube root of %.5lf is %.5lf\n", a, cubeRoot(a));
    printf("Enter a number for suqare root: ");
    scanf("%lf", &a);
    printf("The square root of %.5lf is %.5lf\n", a, squareRoot(a));

    
    return 0; 
}

double cubeRoot(double x)
{
    double y = x;
    double limit = 0.00001;
    bool flag = (((y * y * y) - x) <= limit && ((y * y * y) - x) >= -limit);
    while (!flag)
    {
        y = (2 * y + (x / (y * y))) / 3;
        
        flag = (((y * y * y) - x) <= limit && ((y * y * y) - x) >= -limit);
    }
    return y;
}

double squareRoot(double x)
{
    double y = x;
    double limit = 0.00001;
    bool flag = ((y * y) - x) <= limit;

    while (!flag)
    {
        y = (y - (y / (2 * y)));
        flag = ((y * y) - x) <= limit;
    }
    return y;
}
