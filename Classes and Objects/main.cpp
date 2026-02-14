#include <iostream>

using namespace std;
class book{
public:
    string title;
    string auther;
    int pages;
};
int main()
{
/*A class in C++ is a user-defined data type
that serves as a blueprint for creating objects,
combining related data (data members) and functions
(member functions or methods) into a single, modular unit.*/
book book1;
book1.title="Harry Potter";
book1.auther="Mike";
book1.pages=500;
book book2;
book2.title="Attack on Titan";
book2.auther="Michal Alson";
book2.pages=700;
book book3;
book3.title="Stranger Things";
book3.auther="Duffer Brothers";
book3.pages=100;
cout<< book1.title<<endl;
cout<< book1.auther<<endl;
cout<< book1.pages<<endl;
cout<< book2.title<<endl;
cout<< book2.auther<<endl;
cout<< book2.pages<<endl;
cout<< book3.title<<endl;
cout<< book3.auther<<endl;
cout<< book3.pages<<endl;
return 0;
}
