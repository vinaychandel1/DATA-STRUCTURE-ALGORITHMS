#include <iostream>

using namespace std;

int main()
{int a[16];
for (int i=0; i<16; ++i)
    cin >> a[i];

int inv = 0;
for (int i=0; i<16; ++i)
    if (a[i])
        for (int j=0; j<i; ++j)
            if (a[j] > a[i])
                ++inv;
for (int i=0; i<16; ++i)
    if (a[i] == 0)
        inv += 1 + i / 4;

puts ((inv & 1) ? "No Solution" : "Solution Exists");

    return 0;
}
/*Input:
1

2

3

4

5

6

7

0

8

9

10

11

12

13

14

15

Output:
Solution Exists
*/
