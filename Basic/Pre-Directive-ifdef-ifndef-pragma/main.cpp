//ifdef -> jika sudah di define
//ifndef -> jika belum terdefinisi
#include<iostream>
#ifdef FOO
    #define TEST_FOO "fii ada"
#else 
#define TEST_FOO "foo tidak ada"
#endif


using namespace std;
int main(){
    cout<<TEST_FOO<<endl;
    return 0;
}