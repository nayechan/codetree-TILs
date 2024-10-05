#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    unordered_map<int,int> count;

    for(int i=0;i<n;++i)
    {
        int k;
        cin >> k;

        if(count.find(k) != count.end())
        {
            ++count[k];
        }
        else
        {
            count[k] = 1;
        }
    }

    for(int i=0;i<m;++i)
    {
        int k;
        cin >> k;

        cout << count[k] << " ";
    }


    return 0;
}