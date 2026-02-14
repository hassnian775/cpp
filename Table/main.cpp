#include <iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter The Number from User: ";
    cin>>num;
    int numrange=10;
  cout<< "Multiplication Table of " <<num<<endl;
  for(int i=1;i<=numrange;++i){
    int result = num*i;
  cout<<num<<"x"<< i <<"="<<result<<endl;
  }
    return 0;
}
