#include <iostream>

using namespace std;
class Student {
public:
 string name;
 string major;
 int gpa;
Student(string aName,string aMajor,int aGPA){
 name=aName;
 major=aMajor;
 gpa=aGPA;
}
bool honors(){
if(gpa>=3.8){
    return true;
}
    return false;
}
};
int main()
{
Student student1("Ali","CS",4.0);
cout<<student1.honors();
    return 0;
}
