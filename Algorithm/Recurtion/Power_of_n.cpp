#include<bits/stdc++.h>
using namespace std;



int fun(int x, int n) {
if(n == 0) {
return 1;
}
if(x == 0) {
return 0;
}
return x * fun(x, n-1);
}



int main() {
int x = 2, n = 3;
cout << fun(x, n) << "\n";



return 0;
}
