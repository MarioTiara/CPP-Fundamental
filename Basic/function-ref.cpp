#include <iostream>
using namespace std;

void fungsi (int &b){
    b=10;
    cout<<"address b "<<&b<<endl;
    cout<<" nilai b "<<b<<endl;
}

void kuadrat (int &nilaiRef){
    nilaiRef=nilaiRef*nilaiRef;
}

int main(){
    int a=5;
    cout<<"address a "<<&a<<endl;
    cout<<" nilai a " <<a<<endl<<endl;

    fungsi(a);
    cout<<" nilai a "<<a<<endl<<endl;
    kuadrat(a);
    cout<<" nilai a "<<a<<endl<<endl;

    return 0;
}