#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,3};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    int brr[] ={4,5,6};
    int size_brr = sizeof(brr)/sizeof(brr[0]);
    int final[size_arr + size_brr];
    merge(arr,(arr+size_arr),brr,(brr+size_brr),final);
    cout<<"Final array after merging the elements is: ";
    for (int i = 0; i < (size_brr + size_arr); i++)
        cout << final[i] << " ";
    return 0;
}