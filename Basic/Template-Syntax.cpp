#include <iostream>
#include<string>

using namespace std;

template <typename T, typename G>
bool isSame(const T &a, const G b){
    if (a==1 && b=="b")
        return true;
    return false;
}

int main()
{
        int a=1;
        string b="b";
        cout<<isSame<int,string>(a,b)<<endl;
    return 0;
}