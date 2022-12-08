#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    map<int,int> mp;
    int max_freq = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
        max_freq = max(max_freq, mp[x]);
    }
    for(auto it : mp)
        if(it.second == max_freq)
        {
            cout << it.first << ' ' << it.second << endl;
            break;
        }
}
/*

*/