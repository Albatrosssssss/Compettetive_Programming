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
    int x,y;
    string a;
    int count1=0,count2=0;
    int sum=0;
    int mx=0;
    rep(i,0,t){
        cin>>x>>y;
        cin>>a;
        rep(i,0,a.length()){
            if(a[i]=='1'){
                count1++;
                count2++;
                mx=max(mx,count2);
                
            }
            else{
                count2=0;
            }
        }
       cout<<count1*x+mx*y<<endl;
       count1=0;
       count2=0;
       mx=0;
    }
    return 0;
}
