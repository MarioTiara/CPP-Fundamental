#include <iostream>
using namespace std;

template <class T>
T GetMax (T a, T b){
    return (a>b?a:b);
}
template <class T, class U>
T GetMin (T a, U b) {
  return (a<b?a:b);
}

//using typename
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
int main(){
    int i=5, j=6, k, n;
    long r=8;
    k=GetMax(i,j);
    cout<<k<<endl;
    n=GetMin<int, long> (j,r);
    cout<<n<<endl;
    cout << myMax<int>(3, 7) << endl;
    return 0;
}