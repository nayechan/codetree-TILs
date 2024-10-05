#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> _map;
    for(int i=0;i<n;++i)
    {
        string operation;
        cin >> operation;
        if(operation == "add")
        {
            int a, b;
            cin >> a >> b;
            _map[a] = b;
        }
        else if(operation == "remove")
        {
            int k; 
            cin >> k;
            _map.erase(k);
        }
        else if(operation == "find")
        {
            int k;
            cin >> k;
            if(_map.find(k) != _map.end())
            {
                cout << _map[k] << endl;
            }
            else
            {
                cout << "None" << endl;
            }
        }
    }
    return 0;
}