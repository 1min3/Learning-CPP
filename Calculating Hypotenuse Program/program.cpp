#include <iostream>
#include <cmath>

int main()
{

double a;
double b;
double c;
double apb;


std::cout << "Welcome to the most powerful Hypotenuse calculator made by myself [Press enter to continue]";
std::cin.get();
std::cout << "Please write a's value: ";
std::cin >> a;
std::cout << "now write b's value: ";
std::cin >> b;

a = pow(a, 2);
b = pow(b, 2);
c = sqrt(a + b);

std::cout << "c's value is: " << c << " [Press enter to close the program]";

}