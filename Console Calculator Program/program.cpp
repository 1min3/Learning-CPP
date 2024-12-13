#include <iostream>

int main(){

char op;
double num1;
double num2;
double result;

std::cout << "******** POWERFUL CALCULATOR ********\n";

std::cout <<"Enter your operator (+ - * /): ";
std::cin >> op;

std::cout <<"Enter number 1: ";
std::cin >> num1;

std::cout <<"Enter number 2: ";
std::cin >> num2;

switch (op)
{
case '+':
    result = num1 + num2;
    std::cout << "The result is: " << result;
    break;

case '-':
    result = num1 - num2;
    std::cout << "The result is: " << result;
    break;

case '*':
    result = num1 * num2;
    std::cout << "The result is: " << result;
    break;

case '/':
    result = num1 / num2;
    std::cout << "The result is: " << result;
    break;

default:
    std::cout << "Not an Operator/Number";
    break;
}

std::cout << "\n*************************************";

}
