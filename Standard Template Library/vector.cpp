#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;                                // initialization of vector

    cout<<v.capacity()<<endl;                      // return the assigned space for the vector
    cout<<v.size()<<endl;                          // return the no. of elements present in the vector
    v.front();                                     // returns the first element 
    v.back();                                      // returns the last element
    v.push_back(1);                                // insert element ata the end 
    v.push_back(2);                              
    v.push_back(3);
    v.pop_back();                                  // delete element from the last
    v.at(1);                                       // access the element at position 2
    v.clear();                                     // clear the vector


    vector <int> a(5,2);                           // vector a of size 5 with each element initialized to 1

    for(int i : a)
    {
        cout<<i<<" ";
    }cout<<endl;

    vector<int> b(a);                              // copy vector a into b

    for(int i : b)
    {
        cout<<i<<" ";
    }cout<<endl;


}