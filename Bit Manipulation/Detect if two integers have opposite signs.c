#include<iostream>
using namespace std;
  
/*
bool oppositeSigns(int x, int y)
{
    return (x < 0)? (y >= 0): (y < 0);
}
*/
bool oppositeSigns(int x, int y)
{
    return ((x ^ y) < 0);
}
  
int main()
{
    int x = 100, y = -100;
    if (oppositeSigns(x, y) == true)
    cout << "Signs are opposite";
    else
    cout << "Signs are not opposite";
    return 0;
}

// https://www.geeksforgeeks.org/detect-if-two-integers-have-opposite-signs/
