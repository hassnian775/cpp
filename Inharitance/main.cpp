#include <iostream>
/*Inheritance in C++ is a core feature of object-oriented
programming that allows a new class (the derived class or
child class) to acquire properties and behaviors (data members
and member functions) from an existing class (the base class or parent class). */
using namespace std;
class Chef{
public:
void makechicken(){
cout<<"The Chef Makes Yummy Chicken "<<endl;
}
void makesalad(){
cout<<"The Chef Makes Salad "<<endl;
}
void SpecialDish(){
cout<<"The Chef Makes Yummy BBQs ribs"<<endl;
}
};
class ItalianChef:public Chef{
public:
    void makepasta(){
cout<<"The Chef Makes Pasta "<<endl;
}
void SpecialDish(){
cout<<"The Chef Makes Yummy Chicken Parm "<<endl;
}
};
int main()
{
    Chef chef;
    chef.SpecialDish();
    ItalianChef italianChef;
    italianChef.SpecialDish();
    return 0;
}
