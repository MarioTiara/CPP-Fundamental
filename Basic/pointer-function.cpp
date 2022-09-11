#include <iostream>

using namespace std;

void kuadrat (int val){
    val=val*val;
    cout<<"nilai dari val: "<<val<<endl;
    cout<<"address of val: "<<&val<<endl;
}

void ptrKuadrat(int *valPtr){
    *valPtr=(*valPtr)*(*valPtr);
} 

int main(){
    int a=10;
    kuadrat(a);
    cout<<"nilai dari a: "<<a<<endl;
    cout<<"address of a: "<<&a<<endl<<endl;

    ptrKuadrat(&a);
    cout<<"nilai dari a: "<<a<<endl;
    cout<<"address of a: "<<&a<<endl;
    return 0;
}