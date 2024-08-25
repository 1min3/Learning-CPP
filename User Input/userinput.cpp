//FINALLY SOME USER F-ING INPUT
#include <iostream>

int main()
{
using std::cout;
using std::string;
using std::cin;
using std::getline;

string wlcm = "Welcome to the most powerful name finder and age calculator! [Press enter to continue...]";
string name;
int age;

// for out its << and for in its >>, cin.get() is for waiting the user to press enter (not the best way)

cout << wlcm;
cin.get();

cout << "What's your age?: ";
cin >> age;

cout << "and what's your full name?: ";
getline(cin >> std::ws, name);

// the ">> std::ws" is for the string to not getting them mixed up, ydjouz direct bla mays9si

cout << "Congrats!, your name is " << age << " and you are " << name << " years old!";
cin.get();

}