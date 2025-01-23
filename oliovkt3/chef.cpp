#include "chef.h"

Chef::Chef(string nimi)
{
    chefName=nimi;
    cout<<"[DEBUG] Luotiin kokki nimelta "<<chefName<<endl;
}

Chef::~Chef()
{
    cout<<"[DEBUG] Heitettiin "<<chefName<<" ulos keittiosta"<<endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ainekset)
{
       cout<<"[DEBUG] asetetaan ainesten maaraksi 5 ja palautetaan monta annosta voidaan tehda"<<endl;
       return ainekset/5;
}

int Chef::makeSoup(int ainekset)
{
      cout<<"[DEBUG] asetetaan ainesten maaraksi 3 ja palautetaan monta annosta voidaan tehda"<<endl;
      return ainekset/3;
}
