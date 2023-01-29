#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    //Chef nimi("Gordon Ramsay");
    //nimi.makeSalad();
    //nimi.makeSoup();

    //Chef nimi2("Anthony Bourdain");
    //nimi2.makeSalad();
    //nimi2.makeSoup();

    /*Chef nimi("Jyrki");
    ItalianChef nimi1("Mario");
    nimi.makeSalad();
    nimi1.makePasta();
    nimi.makeSoup();*/

    ItalianChef nimi("Mario", 100, 250);
    nimi.makePasta();

}
