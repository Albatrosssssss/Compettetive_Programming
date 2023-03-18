// ---------------------------------------------------------------------//
//                           Assalamualaikum                            //
//             American International University Bangladesh             //
//                            Binarybeast004                            //
// ---------------------------------------------------------------------//
#include <bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define LL          long long
#define FOR(i,n)    for(int i=0;i<n;i++)
#define rep(i,k,n)  for(int i=k; i<n; i++)

int fun( int n) {
    if(n == 0) {
        return 0;
    }
    int ans = fun(n/10);
    return 1 + ans;
    
    
}

int main(){

    int n=12345;
    cout << fun(n) << "\n";
    return 0;
}
