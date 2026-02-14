#include <iostream>

using namespace std;

int main()
{
 int arr[5]={12,13,11,15,16};
 int x;
 bool found = false;
 cout<< "Enter your Number ";
 cin>>x;
 for(int i=0;i<5;i++){
    if(arr[i]==x){
        found=true;
    }
 }
if(found){
    cout<< "Your Number is Found: ";
}else{
cout<< "Your Number is not Found ";
}
 return 0;
}
