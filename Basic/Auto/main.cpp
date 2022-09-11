// auto -> will be transformed into a data type that is assigned with
#include<iostream>
#include<string>
#include<typeinfo>

using namespace std;

template<typename T, typename U>
auto max(T a, U b){
    return (a>b) ? a:b;
}

int main(){
    auto asString= max("aa", "ad");
    auto asInteger=max(1,3);

    cout<<asString<<endl;
    cout<<asInteger<<endl;
    
    return 0;
}