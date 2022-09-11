#include<iostream>
using namespace std;

struct Rectangle
{
    int Lenght;
    int breadth;
};

int main(){
    Rectangle r={10,5};

    Rectangle *ptr=&r;
    
    ptr->breadth=12;
    (*ptr).Lenght=13;
    
    cout<<r.Lenght <<endl;
    cout<<(*ptr).Lenght;
}
