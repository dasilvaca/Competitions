#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    double value;
    double result;
    printf("Enter value =");
    scanf("%lf", &value);
    result = sin(value);
    printf("The Sine of %f is %f\n", value, result);
    return 0;
}
