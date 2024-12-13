#include <iostream>

int main(){

int month;
std::cout << "What is the number of the month?: ";
std::cin >> month;

switch (month)
{
    case 1: 
         std::cout << "It's january";
    break;

    case 2: 
         std::cout << "It's february";
    break;

    case 3: 
         std::cout << "It's marchuary";
    break;
    
    case 4: 
         std::cout << "It's apruary";
    break;
    
    case 5: 
         std::cout << "It's mauary";
    break;
    
    case 6: 
         std::cout << "It's juary";
    break;

    case 7: 
         std::cout << "It's juluary";
    break;

    case 8: 
         std::cout << "It's auguary";
    break;

    case 9: 
         std::cout << "It's septuary";
    break;

    case 10: 
         std::cout << "It's octuary";
    break;

    case 11: 
         std::cout << "It's novuary";
    break;

    case 12: 
         std::cout << "It's decuary";
    break;

    default:
        std::cout << "that's not a month";
    break;
}

}