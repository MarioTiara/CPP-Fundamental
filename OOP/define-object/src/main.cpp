#include<iostream>

using namespace std;
class Mahasiswa {
    public:
        string nama;
        double IPK;
        Mahasiswa(string nama, double IPK){
            Mahasiswa::nama=nama;
            Mahasiswa::IPK=IPK;
        }

        void tampilkanData(){
            cout<<nama<<"->"<<IPK<<endl;
            
        }
};

int main()
{

    //1. make an object with constructor
    Mahasiswa mahasiswa1= Mahasiswa("mario", 3.2);
    mahasiswa1.tampilkanData();
    //2. Other way with constructor
    Mahasiswa mahasiswa2 ("tiara", 3.43);
    mahasiswa2.tampilkanData();
    // 3. Object on heap
    Mahasiswa* mahasiswa3 = new Mahasiswa("pratama",3.55);  
    mahasiswa3->tampilkanData();
    return 0;
}