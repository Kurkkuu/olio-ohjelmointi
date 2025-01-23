#include "italianchef.h"

ItalianChef::ItalianChef(string x):Chef(x)
{    
    cout<<"[DEBUG] "<<x<<" on italialainen kokki"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"[DEBUG] Heitetaan italialainen kokki ulos keittiosta"<<endl;
}

bool ItalianChef::askSecret(string arvaus, int vehna, int vesi)
{
    if (password==arvaus)
    {
        cout<<"[DEBUG] Salasana oikein!\n"<<endl;

        makepizza(vehna,vesi);

        return true;
    }
        return false;
}

int ItalianChef::makepizza(int vehna, int vesi)
{
    int maara = min(vehna/5, vesi/5);
    cout<<"[DEBUG] Pizzoja pystytaan valmistamaan: "<<maara<<"\n"<<endl;
    return maara;

}

