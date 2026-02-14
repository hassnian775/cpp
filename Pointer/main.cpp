#include <iostream>

using namespace std;

int main()
{
    //pointer store the memory address of another variable.
    int age=21;
    int *page=&age;
    string Name="Hassnain";
    string *pName=&Name;
    double gpa =4.0;
    double *pgpa=&gpa;
    cout <<"Name:" <<*&Name<<endl;
    cout <<"Age: " <<*&age<<endl;
    cout <<"GPA: "<<*&gpa<<endl;
    return 0;
}
