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

    int n,count=0;
	cin>>n;
	string s;
	cin>>s;
	rep(i,0,n){
		s[i]=tolower(s[i]);
	}
	sort(s.begin(),s.end());
	//cout<<s;
	rep(i,0,n){
		if(s[i]!=s[i+1]){
			count=count+1;
		}
	}
	if(count==26){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
    return 0;
}
