//recution
// factorial using recursion
#include<bits/stdc++.h>
using namespace std;



int fun(int n) {
if(n == 0) {
return 1;
}
int out = n * fun(n-1);
return out;
}



int main() {
int n = 5;
cout << fun(n) << "\n";



return 0;
}
