// Arethmetic Operators
#include <iostream>

int main()
{

int students = 16;
int nbOfStPrGrp = 4;

int remainder = students % 4;

// 7assil 9isma

students = students / nbOfStPrGrp;

/*its used to add or substract or divide or multiplicate (hehe)
we can use students = students + 1 OR students+=1 OR students++
math is not mathing too*/

std::cout << "there will be " << students << " groups of " << nbOfStPrGrp << " with " << remainder << " people left.";

}