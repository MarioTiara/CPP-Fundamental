#include<iostream>
using namespace std;

template <typename T>
T pi=T(3.14159265359L);

template<typename T>
T area_of_circle(const T & r){
    return r*r*pi<T>;
}
int main()
{
    cout.precision(20);
    cout<<pi<long double><<endl;

    return 0;
}