#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef y = Chef("Jarmo");
    ItalianChef x = ItalianChef("Luigi");

    int saladIngredients, soupIngredients;

    cout<<"Anna salaatin ainesosien maara: "<<endl;
    cin>>saladIngredients;
    cout<<"Anna keiton ainesosien maara: "<<endl;
    cin>>soupIngredients;

    int saladPortions = y.makeSalad(saladIngredients);
    int soupPortions = y.makeSoup(soupIngredients);

    cout<<"Salaattiannoksia voidaan tehda: "<<saladPortions<<endl;
    cout<<"Soppa-annoksia voidaan tehda: "<<soupPortions<<endl;


    x.askSecret("pizza",5,5);


    return 0;
}
