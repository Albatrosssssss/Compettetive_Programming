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

    int t;
    cin>>t;
    rep(i,0,t){
        int n;
        string a;
        cin>>n>>a;
        bool paici=false;
        rep(i,0,n-1){
            
            if (a[i]=='L' && a[i+1]=='L'){
            paici=true;
            }
             if (a[i]=='R' && a[i+1]=='R'){
            paici=true;
            }
        }
        if(paici){
            cout<<"YES"<<endl;

        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
