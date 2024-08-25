#include <iostream>
// basic input fonctions

int main()
{
    using std::cout;
    using std::string;

    // int chiffre arrondi

    int temperature = 23;
    int tempmax = 32;
    int tempmin = 21;
    int prix = 5;
    int kisma = 2;

    // double chiffre non arrondi

    double tempdos = tempmax + tempmin;
    double tempmoy = tempdos / kisma;

    // char charactere celibataire

    char currency = '$';

    // boolean (bool) true wla false

    bool marche = true;

    // string chghol char b plusieurs 

    string tempinfo = "La temperature a Kouba est de ";
    string maximales = "° avec des maximales de ";
    string minimales = "° avec une moyenne de ";
    string moyenne = "° avec une moyenne de ";
    string prixtemp = "°, la temperature a couté ";
    string remerciemenet = ", Merci (;";

    //Bsh nsoti line soit |std::endl;| wla |'\n';|

    cout << tempinfo << temperature << maximales << tempmax << minimales << tempmin << moyenne << tempmoy << prixtemp << prix << currency << remerciemenet << '\n';
    return 0;
}