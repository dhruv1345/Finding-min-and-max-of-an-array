#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={ 1, 45, 54, 71, 76, 12 };

    // finding the size(number of elements in an array )
    int size=sizeof(arr)/sizeof(arr[0]);

    // using functions which are provided in STL
    cout<<"minimum element is: "<<*min_element(arr,arr+size)<<endl;
    cout<<"maximum element is: "<<*max_element(arr,arr+size);

    return 0;
}

