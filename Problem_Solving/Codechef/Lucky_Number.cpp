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
int main(){
    int n;
    cin>>n;
    rep(i,0,n){
        int a,b,c;
        cin >>a>>b>>c;
        if (a==7 || b==7 || c==7)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
return 0;
}