#include "italianchef.h"



ItalianChef::ItalianChef(string nimi)
{
    name = nimi;
    cout<<"Chef"<<getName()<<"konstruktori"<<endl;
}
ItalianChef::~ItalianChef()
{
    cout<<"Chef"<<getName()<<"destruktori"<<endl;
}
string ItalianChef::getName()
{
    return name;
}
void ItalianChef::makePasta()
{

}
