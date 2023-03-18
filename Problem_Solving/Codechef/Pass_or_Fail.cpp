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
    int n,x,p,con=0;
    cin>>t;
    rep(i,0,t){
        cin>>n>>x>>p;
        con=(x*3)-(n-x);
        //cout<<con;
        if(con>=0){
            if(con>=p){
                cout<<"PASS"<<endl;
            }
            else{
                cout<<"FAIL"<<endl;
            }
        }
        else if(con<=0) {
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}
