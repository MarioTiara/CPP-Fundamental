#include <iostream>
#include <string>

using namespace std;

class Shape
{ 
    protected:
        int width;
        int height;
    
    public:
        virtual int Area () =0;
        void setWidth(int w){
            this->width=w;
        }
        void setHeight(int h){
            this->height=h;
        }
};

class Rectangle:public Shape{
    public:
        int Area(){
            return (width*height);
        }
};

class Triangle:public Shape{
    public:
        int Area() {
            return (width*height/2);
        }
};

int main(){

    Rectangle rectangle ;
    rectangle.setHeight(5);
    rectangle.setWidth(4);
    cout<<rectangle.Area()<<endl;
    Triangle triangle;
    triangle.setHeight(3);
    triangle.setHeight(7);
    cout<<triangle.Area()<<endl;
    

    return 0;
}