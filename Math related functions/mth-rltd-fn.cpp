// math related functions
#include <iostream>
#include <cmath>

//might need https://cplusplus.com/reference/cmath/

int main()
{

double x = 7;
double y = 4;
double z;
double a;
double b;
double c;
double d;
double e = 1.28;
double f;
double g;
double h;

z = std::max(x, y);
a = std::min(x, y);
b = pow(2, 2);
c = sqrt(9);
d = abs(-4388);
f = round(e);
g = ceil(e);
h = floor(e);


//gets the maximum one out of the 2 wla the minimum kima t7ab

std::cout << "the bigger one is " << z << " and the smaller one is " << a << std::endl;
std::cout << "the power of 2 is " << b << std::endl;
std::cout << "the square root of 9 is " << c << std::endl;
std::cout << "the 9ima motla9a (absolute value) of -4388 is " << d << std::endl;
std::cout << "1,28 mdewra (rounded) equals to " << f << " but mdewra lelfo9 its " << g << " and mdewra lel ta7t its " << h;

}