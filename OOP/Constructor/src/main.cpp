#include<iostream>
#include<string>

using namespace std;


class Person{
    public:
        string name;
        int age;
        string address;
        Person(string name, int age, string address){
            this->name=name;
            this->age=age;
            this->address=address;
        }
};

int main(){
    Person mario= Person("mario", 17, "Jakarta");
    cout<<mario.name<<" "<<mario.age<<" "<<mario.address<<endl;
    
    
    return 0;
}