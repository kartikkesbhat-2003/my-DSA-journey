# include<bits/stdc++.h>

using namespace std;

int main()
{
    // Declairing 2D array 
    int matrix[3][4];                          // here 3 in the no. of rows and 4 is the number of colums

    // taking inputs for 2D array
    
    // loop to take inputs of each row
    for(int i=0;i<3;i++)
    {
        // loop to take inputs of elements of each row
        for(int j=0;j<4;j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

}

