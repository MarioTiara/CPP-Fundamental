#ifndef _PEOPLE
    #define _PEOPLE
#include <exception>
#include<string>

class People{
    private :
        string name;
        int umur=24;
    public :
        int getumur(){
            return umur;
        };
        void setName(string nama){
            name=nama;
        }
        string getName(){
            return name;
        }
};


#endif