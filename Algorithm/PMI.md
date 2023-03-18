Prove that F(n) is true for all natural number 
1.base: F(0)/F(1) is valid input
2.Induction Hypothesis: Actually we let a case true. F(k)=true
3.using IH F(k+1) is true

![recurtion](https://user-images.githubusercontent.com/67068215/138455276-69a5f63a-25e8-4a40-8523-c289f63fbbd9.png)


// factorial using recursion
#include<bits/stdc++.h>
using namespace std;



int fun(int n) {
if(n == 0) {
// base case
return 1;
}
// Induction hypothesis
int smallout = fun(n-1);
int out = n * smallout;
return out;
}



int main() {
int n = 5;
cout << fun(n) << "\n";



return 0;
}
