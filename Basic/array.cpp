#include<iostream>
#include<array>
using namespace std;

int main()
{
    
    array<string,3> nilai;

    return 0;
}


class Person{
    private:
        string name;
        int umur;
    public :
        Person(int umurval, string nameval){
            name=nameval;
            umur=umurval;
        }

        string getName(){
            return name;
        }

        int getAge(){
            return umur;
        }
};