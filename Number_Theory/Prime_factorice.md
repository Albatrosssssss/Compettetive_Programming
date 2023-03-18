**prime Factorisation** 

2-sqrt(n)

n=n/i;

divs.push_back(i);

~~~~cpp
vector<int> v;
 for (int i = 2; i * i <= n; i++) {
   if (n % i == 0) {
     while (n % i == 0) {
     v.push_back(i);
     n =n/i;
     }
   }
 }
 if (n > 1) v.push_back(n);
 for (auto x: v) cout << x << ' ';
 return 0;
}
~~~~

**All Prime numbers**

n^2 + n + 41 (Upto n=39)
