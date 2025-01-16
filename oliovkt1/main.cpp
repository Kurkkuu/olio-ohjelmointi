#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
   int maxnum;
   cout<<"Tervetuloa, aseta vaikeustaso:"<< endl;
   cin>>maxnum;

   int arvausLKM=game(maxnum);
   cout<<"Arvasit luvun "<< arvausLKM<<" yrityksella"<<endl;

    return 0;
}

int game(int maxnum)
{
    srand(time(0));

    int oikeaLuku= rand()%maxnum+1;
    int arvaus;
    int arvausLKM=0;

    cout<<"Arvaa luku jonka olen arponut, 1-"<<maxnum<<"."<<endl;

    while(true){
        cout<<"Anna arvauksesi:"<<endl;
        cin>>arvaus;
        arvausLKM++;

        if (arvaus < oikeaLuku){
            cout<<"Lukusi on pienempi"<< endl;
        }
        else if (arvaus > oikeaLuku){
            cout<<"Lukusi on suurempi"<< endl;
        }
        else{
            cout<<"Oikea luku!!"<< endl;
            break;
        }
    }
    return arvausLKM;
};
