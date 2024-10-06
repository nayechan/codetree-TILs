#include <iostream>
#include <cctype>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    unordered_map<string, int> _map;
    vector<string> keys(n);

    for(int i=0;i<n;++i)
    {
        string str;
        cin >> str;

        _map[str] = i+1;
        keys[i] = str;
    }
    for(int j=0;j<m;++j)
    {
        string str;
        cin >> str;
        if(isdigit(str[0]))
        {
            cout << keys[atoi(str.c_str())-1] << endl;
        }
        else
        {
            cout << _map[str] << endl;
        }
    }

    return 0;
}