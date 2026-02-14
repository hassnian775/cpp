#include <iostream>

using namespace std;

int main()
{
  int units;
  int bill=0;

cout<< "Enter Your Electricity Units: ";
cin>>units;

    if(units<=100){

        bill=units*20;
    }
    else if(units<=200){

        bill=(100*20)+(units-100)*30;

    }
    else if(units<=300){

        bill=(100*20)+(100*30)+(units-200)*46;

    }else{
    bill=(100*20)+(100*30)+(100*46)+(units-300)*55;
    }
    cout<< "Your Total Electricity Bill is: Rs. " <<bill;
    return 0;
}
