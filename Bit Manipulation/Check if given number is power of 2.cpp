#include <iostream>
using namespace std;
int powerof(int n){
    return (n&&!(n&(n-1)));
}

int main() {
    cout<<powerof(16);
    return 0;
}
