#include <iostream>

int main()
{

int age;

std::cout << "Enter your age: ";
std::cin >> age;


if (age >= 120){
    std::cout << "bro is older that C++";
}


else if(age >= 18){
    std::cout << "You are too old to play this kind of games";
}


else if (age <= 0){
    std::cout << "you arent born yet :skull:";
}


else{
    std::cout << "Welcome to the game!";
}

}