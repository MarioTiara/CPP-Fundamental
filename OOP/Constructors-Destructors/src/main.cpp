#include<iostream>
#include<string>
using namespace std;

const string unk ="unknown";
const string clone_prefix="clone";


//--interface
class Animal {
    string _type="";
    string _name="";
    string _sound="";

    public:
        Animal();   //deafult constructor
        Animal(const string & type, const string & name, const string & sound);
        Animal (const Animal &); //copy constructor
        Animal & operator=(const Animal &); //copy operator
        ~Animal(); //destructor

        void print() const;
};



int main(){


    return 0;
}