// ---------------------------------------------------------------------//
//                           Assalamualaikum                            //
//             American International University Bangladesh             //
//                            Binarybeast004                            //
// ---------------------------------------------------------------------//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int testpass=0;
    for(int i=0; i<n; i++){
    long long int t;
    cin>>t;
    if(t%k==0){
        testpass=testpass+1;
    }
    }
    cout<<testpass;
    
    return 0;
}