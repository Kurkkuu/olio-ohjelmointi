#include <iostream>
#include "pankkitili.h"
using namespace std;

int main()
{
   Pankkitili tili1("Anna Virtanen","111",1000.5);
   Pankkitili tili2("Veijo Virtanen","222",2000);

   cout<<"Tulostetaan tilitiedot"<<endl;
   tili1.tulostaTilitiedot();
   tili2.tulostaTilitiedot();

    return 0;
}
