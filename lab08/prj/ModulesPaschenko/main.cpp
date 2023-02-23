#define PI 3.14159265359
#define e 2.71828

#include <cmath>

float s_calculation(int x, int y, int z)
{
    float s;
    s = PI * x + pow(e, abs(y)) - sqrt(abs(pow(z, 2) - y));
    return s;
}
