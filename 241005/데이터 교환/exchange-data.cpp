#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int tmp = c;
    c = b;
    b = a;
    a = tmp;
    cout << a << endl << b << endl << c << endl;
    return 0;
}