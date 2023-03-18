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
   LL int a,b;
   LL int s;
   LL int sum=0;
   rep(i,0,t){
       cin>>s;
       while (s>0)
       {
           a=s%10;
           sum=(sum*10)+a;
           s=s/10;
           //cout<<sum<<endl;
       }
       cout<<sum<<endl;
       sum=0;
   }
    return 0;
}
