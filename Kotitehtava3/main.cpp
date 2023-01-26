#include <iostream>
#include "chef.h"
using namespace std;

int main()
{
    Chef nimi("Gordon Ramsay");
    nimi.makeSalad();
    nimi.makeSoup();

    Chef nimi2("Anthony Bourdain");
    nimi2.makeSalad();
    nimi2.makeSoup();
}
