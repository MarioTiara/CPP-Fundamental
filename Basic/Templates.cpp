#include <iostream>
#include<string>
using namespace std;

template <typename T>
T maxof (const T & a, const T &b){
    return (a>b?a:b);
}

template <typename G>
G minof(const G & a, const G &b){
    return (a<b?a:b);
}

int main()
{
    string a="seven";
    string b="nine";
    // cout<<"max is "<<maxof<string>(a,b)<<endl;
    
    cout<<"min is "<<minof<string>(a,b)<<endl;

    return 0;
}