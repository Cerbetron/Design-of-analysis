#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int array[100];
    int* arr =new int[100];
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for (auto it : v) 
        cout << it << " "; 
    cout << "Size of vector Before Removal=" << v.size() << "\n"; 
    for (auto it : v) 
        cout << it << " "; 

    v.erase(v.begin() + 2); 
 
    cout << "\nSize of vector After removal=" << v.size() << "\n"; 

    for (auto it : v) 
        cout << it << " "; 
 

    return 0;
}