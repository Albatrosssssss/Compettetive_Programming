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

   LL int t;
   cin>>t;
   LL int a=0,b=0;
   LL int winner=0;
   LL int sub=0;
   LL int lead=0;
   rep(i,0,t){
       int aa,bb;
       cin>>aa>>bb;
       a=a+aa;
       b=b+bb;
       if(a>b){
           sub=(a-b);
           if(sub>lead){
               lead=sub;
               winner=1;
           }
       }
       if(b>a){
           sub=(b-a);
           if(sub>lead){
               lead=sub;
               winner=2;
           }
       }
       //cout<<a<<" "<<b<<" "<<lead<<endl;
      
   }
    cout<<winner<<" "<<lead<<endl;
    return 0;
}
