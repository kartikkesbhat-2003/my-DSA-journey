#include<bits/stdc++.h>

using namespace std;

void mergeSort(int v1[],int a, int v2[],int b, int v[])
{
    int i=0, j=0, k=0;
    while (i<a && j<b){

        if(v1[i]<v2[j]){
            v[k++]= v1[i++];
        }

        else{
           v[k++]= v2[j++];
        }
    }

    while(i<a){
        v[k++]= v1[i++];
    }

    while(j<b){
        v[k++]= v2[j++];
    }
}

void print(int v[],int m){

    for(int i=0;i<m;i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
    int m = 3;
    int v1[] = {1, 5, 7};
    int v2[] = {2, 5, 10};
    int v[6];
    mergeSort(v1,3,v2,3, v);
    print(v,6);

    return 0;
}