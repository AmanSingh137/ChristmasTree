#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define mod 10001
#define cr continue
#define tester() int t; cin >> t; while(t--)

signed main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r",stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int k = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout << " ";
        }    
        for(int l =0; l < 2*k+1; l++) cout << "*";
        cout << endl;
        k++;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << " ";
        }
        cout << ":" << endl;
    }
}
