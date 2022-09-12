#include <iostream>

using namespace std;

template <class T>
class mypair {
    T values [2];
    public:
        mypair ( T first, T second){
            values[0]=first; values[1]=second;
        }

        void prt(){
            cout<<values[0]<<endl;
        }
    
};

int main (){
    mypair<int> myobject (115,12);
    myobject.prt();
    return 0;
}