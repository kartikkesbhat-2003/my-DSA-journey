/*
 
Problem Statement

Given an array 'arr' of integer numbers, 'arr[i]' represents the number of pages in the 'i-th' book.

There are 'm'number of students, and the task is to allocate all the books to the students.

Allocate books in such a way that:

1. Each student gets at least one book. 
2. Each book should be allocated to only one student.
3. Book allocation should be in a contiguous manner.

You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimum.

If the allocation of books is not possible, return -1
 
*/

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m,int mid)
{
    int studentCount = 1 ;
    int pageSum = 0;
    for(int i=0;i<n;i++)
    {
        if(pageSum + arr[i] <= mid )
        {
            pageSum = pageSum + arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}


int findPages(int arr[], int n, int m) {
    int start =0;
    int sum = 0;
    for ( int i=0 ;i< n; i++)
    {
        sum=sum+arr[i];
    }
    int ans= -1;
    int end=sum;
    int mid = start + (end-start)/2;

    while (start<=end)
    {
        if(isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main ()
{
    int n=4;
    int k=2;
    int arr[4] = { 5 , 5 , 5 , 5};
    cout<<findPages(arr , n,  k);
}


/*

arr --> [ 10 20 30 40 ]     arr[i] --> no, of pages   m = 2 (no. of students)

for the above array the possible minimum and maximum values are 0 and 100 respectively 

0 [start]----------50 [mid]----------100 [end]
mid = 50
is possible (mid = 50)  NO  <------------------------------------------------------------------------------------------
10  20 | 30 | 40                                                                                                      |
[ I ]   -->  ( 10 + 20 ) | 30 + 40    ------>  10 + 20 = 30 < mid(50)  ---> here I is the student number              |
[ II ]  -->  ( 30 ) | 40              ------>  30 < mid(50)                                                           |
[ III ] -->  III(3) > m( no. of students ) ----> mid = 50 is not possible   ---> go to right subpart ------------------

51 [start]----------75 [mid]----------100 [end]
mid = 75
is possible (mid = 75)  yes  <------------------------------------------------------------------------------------------
10  20  30 | 40                                                                                                        |
[ I ]   -->  ( 10 + 20 +30) | 40    ------>  10 + 20 + 30 < mid(75)                                                    |
[ II ]  -->  ( 40 )                 ------>  40 < mid(75)                                                              |
at mid = 75 there is a possible solution -------------------------------------------------------------------------------
store mid as ans (ans = mid) and go to left subpart  ----> [ ans = mid = 75]

51 [start]----------62 [mid]----------74 [end]
mid = 62
is possible (mid = 62)  yes  <------------------------------------------------------------------------------------------
10  20  30 | 40                                                                                                        |
[ I ]   -->  ( 10 + 20 +30) | 40    ------>  10 + 20 + 30 < mid(62)                                                    |
[ II ]  -->  ( 40 )                 ------>  40 < mid(62)                                                              |
at mid = 75 there is a possible solution -------------------------------------------------------------------------------
store mid as ans (ans = mid) and go to left subpart  ----> [ ans = mid = 62 ]

51 [start]----------56 [mid]----------61 [end]
mid = 56
is possible (mid = 56)  NO  <------------------------------------------------------------------------------------------
10  20  30 | 40                                                                                                        |
[ I ]   -->  ( 10 + 20 ) | 30 + 40    ------>  10 + 20 = 30 < mid(56)                                                  |
[ II ]  -->  ( 40 )                   ------>  40 < mid(75)                                                            |
[ III ] -->  III(3) > m ( no. of students ) ----> mid = 56 is not possible   ---> go to right subpart ------------------

57 [start]----------59 [mid]----------61 [end]
mid = 56
is possible (mid = 59)  NO  <------------------------------------------------------------------------------------------
10  20  30 | 40                                                                                                        |
[ I ]   -->  ( 10 + 20 ) | 30 + 40    ------>  10 + 20 = 30 < mid(59)                                                  |
[ II ]  -->  ( 40 )                   ------>  40 < mid(59)                                                            |
[ III ] -->  III(3) > m ( no. of students ) ----> mid = 59 is not possible   ---> go to right subpart ------------------

60 [start]----------60 [mid]----------61 [end]
mid = 60
is possible (mid = 60)  NO  <------------------------------------------------------------------------------------------
10  20  30 | 40                                                                                                        |
[ I ]   -->  ( 10 + 20 ) | 30 + 40    ------>  10 + 20 + 30 <= mid(60)                                                 |
[ II ]  -->  ( 40 )                   ------>  40 < mid(60)                                                            |
[ III ] -->  III(3) > m ( no. of students ) ----> mid = 56 is not possible   ---> go to right subpart ------------------

60 [start]----------60 [mid]----------61 [end]
mid = 60
is possible (mid = 60)  yes  <------------------------------------------------------------------------------------------
10  20  30 | 40                                                                                                        |
[ I ]   -->  ( 10 + 20 +30) | 40    ------>  10 + 20 + 30 <= mid(60)                                                   |
[ II ]  -->  ( 40 )                 ------>  40 < mid(60)                                                              |
at mid = 60 there is a possible solution -------------------------------------------------------------------------------
store mid as ans (ans = mid) and go to left subpart  ----> [ ans = mid = 60 ]

here if we go to left subpart the value of start becomes greater than end so end the loop and return the ans 

return ans = 60

*/