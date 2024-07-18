#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> st;

    set<int>::iterator it = st.begin();
    set<int>::iterator it1,it2;
    pair<set<int>::iterator, bool> ptr; 
    ptr = st.insert(20);
    if (ptr.second) 
        cout << "The element was newly inserted"; 
    else
        cout << "The element was already present"; 
    
    int arr[3] = {2,3,1};
    st.insert(arr,arr+3);
    cout << "\nThe set elements after 3rd insertion are : "; 

    for (it1 = st.begin(); it1!=st.end(); ++it1) 
        cout<<*it1<<" ";
    it= st.begin();
    cout<<endl;
    ++it;
    st.erase(it);
    cout << "The set elements after 1st deletion are : "; 
    for (it1 = st.begin(); it1 != st.end(); ++it1) 
        cout << *it1 << " "; 
}