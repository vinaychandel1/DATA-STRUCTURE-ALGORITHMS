
#include <bits/stdc++.h>
using namespace std;
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
void permute(string a, int l, int r)
{   // Base case
    if (l == r)
        cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
        // Swapping done
            cout<<"value of l at 1:"<<l<<" i "<<i<<endl;
            swap(a[l], a[i]);
            // Recursion called
            permute(a, l+1, r);
            //backtrack
            cout<<"value of l at 2:"<<l<<" i "<<i<<endl;
            swap(a[l], a[i]);
        }
    }
}
// Driver Code
int main()
{
    string str = "ABC";
    int n = str.size();
    permute(str, 0, n-1);
    return 0;
}
