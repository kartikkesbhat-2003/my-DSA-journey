#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

char getMaxOccChar(string str){
    int arr[26] = {0};
    int i = 0;
    while(str[i] != '\0'){
        int num = toLowerCase(str[i++]) - 'a';
        arr[num]++;
    }
    int maxx = 0;
    char ans;
    for(int i = 0; i < 26 ; i++){
        if(arr[i]>maxx){
            maxx = arr[i];
            ans ='A' + i;
        }
    }
    return ans;  
}


int main(){
    string str;
    cin>>str;
    cout<<endl;
    cout<<getMaxOccChar(str);

    return 0;
}