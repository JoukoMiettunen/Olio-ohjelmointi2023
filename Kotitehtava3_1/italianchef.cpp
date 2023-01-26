#include "italianchef.h"



ItalianChef::ItalianChef(string nimi)
{
    name = nimi;
    cout<<"Chef "<<getName()<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}
void ItalianChef::makePasta()
{
    cout<<"Chef "<<getName()<<" makes pasta"<<endl;
}
