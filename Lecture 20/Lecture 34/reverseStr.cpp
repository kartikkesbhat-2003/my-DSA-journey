#include<bits\stdc++.h>

using namespace std;


void reverse(string &str, int s, int e) {
    if(s>=e)
    {
        return;
    }

    swap(str[s], str[e]);
    reverse(str, s+1, e-1);
}

int main()
 {
    string str = "Kartik";
    cout << "Original String: ";
    for (char c : str){
        cout << c << " ";
    }
    cout << endl;
    // Reverse the whole string using recursion
    reverse(str, 0, str.length() - 1);
    cout << "Reversed String: ";
    for (char c : str){
        cout << c << " ";
    }
    return 0;
 }