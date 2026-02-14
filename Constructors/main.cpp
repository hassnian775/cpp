#include <iostream>
/*used to initialize objects of a class when they are created*/
using namespace std;
class Book{
public:
    string title;
    string author;
    int pages;
   Book(){
   title="No Title";
   author="No Auther";
   pages=0;
   }
    Book(string aTitle,string aAuthor,int aPages){
    title=aTitle;
    author=aAuthor;
    pages=aPages;
    }
};
int main()
{
   Book book1("Harry Potter","Wiliam",263);
   Book Book3;
   cout<<Book3.title;
   return 0;
}
