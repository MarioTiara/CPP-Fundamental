#include<iostream>
#include<string>
#include<array>
#include<list>
using namespace std;

struct buah {
    string warna;
    float berat;
    int harga;
    string rasa;
};



int main()
{
    buah apel;

    apel.berat=1.5;
    apel.rasa="manis";
    apel.harga=5000;
    cout<<apel.rasa<<endl;
    buah jeruk;
    jeruk.warna="asam";
    array<buah,3>aplles={};

    aplles[0]=apel;
    aplles[1]=jeruk;

   cout<<aplles[0].harga<<endl;
    list<buah>listbuah={};
    listbuah.push_front(apel);
    
    
    return 0;
}