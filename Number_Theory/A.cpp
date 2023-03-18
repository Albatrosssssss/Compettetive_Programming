// ---------------------------------------------------------------------//
//                           Assalamualaikum                            //
//             American International University Bangladesh             //
//                            Binarybeast004                            //
// ---------------------------------------------------------------------//

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    //input
    long long z;
    cin>>z;
    //condition
    if(z%2==0)
    {
        cout<<z/2<<endl;
    }
    else
    {
        cout<<-(z+1)/2;
    }
    return 0;
}
