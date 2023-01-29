#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
using namespace std;

class ItalianChef:public Chef
{
public:
    ItalianChef(string nimi="");
    ItalianChef(string nimi, int a, int b);
    string getName();
    void makePasta();
private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
