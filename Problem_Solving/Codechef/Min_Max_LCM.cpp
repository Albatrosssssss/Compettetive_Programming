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
        LL int x,k;
        LL int lcm1,lcm2,gcd1,gcd2;
        cin>>x>>k;
        gcd1=__gcd(x,2*x);
        //cout<<gcd1;
        lcm1=((x*2*x)/gcd1);
        gcd2=__gcd((x*k),((x*k)-1));
        lcm2=((x*k)*((x*k)-1))/gcd2;
        cout<<lcm1<<" "<<lcm2<<endl;
    }
    return 0;
}
