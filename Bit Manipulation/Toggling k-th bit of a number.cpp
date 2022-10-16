/*
Input : n = 5, k = 1
Output : 4
5 is represented as 101 in binary
and has its first bit 1, so toggling 
it will result in 100 i.e. 4.

Input : n = 2, k = 3
Output : 6

Input : n = 75, k = 4
Output : 67
*/

#include<iostream>
using namespace std;
 
int toggleKthBit(int n, int k)
{
    return (n ^ (1 << (k-1)));
}
 
// Driver code
int main()
{
    int n = 5, k = 1;
    cout << toggleKthBit(n , k);
    return 0;
}
