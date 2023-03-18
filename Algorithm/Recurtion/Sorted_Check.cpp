#include<bits/stdc++.h>
using namespace std;



bool fun(int a[], int n) {
if(n == 0 || n == 1) {
return true;
}
if(a[0] > a[1]) {
return false;
}
return fun(a+1, n-1);
}



int main() {
int a[5] = {10, 999, 3, 4, 5};
cout << a[1] << "\n";
int n = 5;
if(fun(a, n)) {
cout << "SORTED" << "\n";
}
else {
cout << "NOT SORTED\n";
}



return 0;
}
