#include <iostream>
using namespace std;

int main() {
    float a;
    cin >> a;
    cout.precision(2);
    cout << fixed << a + 1.5f << endl;
    return 0;
}