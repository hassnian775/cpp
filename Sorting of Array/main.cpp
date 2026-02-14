#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];


    for(int i = 0; i < n; i++) {
        cout << "Enter element: "  ;
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j] < arr[i]){
        int a = arr[j];
        arr[j]= arr[i];
        arr[i]= a;
        }
    }
}
        cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
return 0;
}
