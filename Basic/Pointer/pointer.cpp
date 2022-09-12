#include <iostream>
using namespace std;

int main(){

    int a=5;

   //pointer
    int *aPtr=nullptr;
    aPtr=&a;
    cout<<"nilai dari a: "<<a<<endl;
    cout<<"alamat dari a:"<<aPtr<<endl;
    cout<<"dereferencing pointer: "<<*aPtr<<endl;
    //mengubah nilai pointer
    a=10;
    cout<<"nilai aPtr setelah diubah: "<<*aPtr<<endl;
    return 0;
}