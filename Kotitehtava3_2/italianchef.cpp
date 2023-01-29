#include "italianchef.h"



ItalianChef::ItalianChef(string nimi)
{
    name = nimi;
    cout<<"Chef "<<getName()<<" konstruktori"<<endl;
}

ItalianChef::ItalianChef(string nimi, int a, int b):Chef(nimi)
{
    vesi = a;
    jauhot = b;
    name = nimi;
    cout<<"Chef "<<getName()<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}
void ItalianChef::makePasta()
{
    cout<<"Chef "<<getName()<<" makes pasta with special recipe"<<endl;
    cout<<"Chef uses jauhot = "<<jauhot<<endl;
    cout<<"Chef uses vesi = "<<vesi<<endl;
}
