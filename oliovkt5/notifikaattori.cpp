#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{

}

void Notifikaattori::lisaa(Seuraaja* eka)
{
    eka->next=seuraajat;
    seuraajat=eka;
}

void Notifikaattori::poista(Seuraaja*poistettava)
{
    Seuraaja*o=seuraajat;

    if (seuraajat==poistettava){
        seuraajat=seuraajat->next;
        return;
    }

    while (o !=nullptr){
        if (o->next==poistettava){
            o->next=o->next->next;
            return;
        }

        o=o->next;

    }
}

void Notifikaattori::tulosta()
{
    Seuraaja*o=seuraajat;



    while (o !=nullptr)
    {
        cout<<o->getNimi()<<endl;

        o=o->next;
    }




}

void Notifikaattori::postita(string teksti)
{
    Seuraaja*o=seuraajat;



    while (o !=nullptr)
    {
      o->paivitys(teksti);

      o=o->next;
    }




}
