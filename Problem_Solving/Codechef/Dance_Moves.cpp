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
#define repp(i,k,n) for(int i=k; i<=n; i++)

int main(){

    int t;
    cin>>t;
    rep(i,0,t){
        int a,b,x,y;
        cin>>x>>y;

        if(y>x){
            if((y-x)%2==0){
                cout<<((y-x)/2)<<endl;
            }
            else{     //if((y-x)%2!=0))     
                b=(((y-x)/2)+2);
                cout<<b<<endl;
            }
        }
        else if(y<x){
            cout<<x-y<<endl;
        }
        else {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
