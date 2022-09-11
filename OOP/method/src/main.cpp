#include<iostream>
#include<string>

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

        void ubahNama(const char* nama){
            Mahasiswa::nama=nama;
        }

        double getIP (){
            return this->IPK;
        }
};

int main(){

    Mahasiswa mario= Mahasiswa("mario",3.43);
    mario.tampilkanData();
    mario.ubahNama("ucup");
    mario.tampilkanData();
    mario.ubahNama("tiara");
    cout<<mario.nama<<" IPK: "<<mario.getIP()<<endl;
    return 0;
}