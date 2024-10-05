#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    unordered_map<string, int> _map;
    for(int i=0;i<n;++i)
    {
        string k;
        cin >> k;
        if(_map.find(k) != _map.end())
        {
            ++_map[k];
        }
        else
        {
            _map[k] = 1;
        }
    }
    int _max = 0;
    for(const auto & _pair : _map)
    {
        if (_max <= _pair.second)
        {
            _max = _pair.second;
        }
    }

    cout << _max << endl;
    return 0;
}