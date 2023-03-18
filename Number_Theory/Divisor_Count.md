
1 to n Divisor Count: 

````cpp
int divisor_count(int n){
  vector<int>divs;
  for(int i=1; i*i<=n; i++){
    if(n%i==0){
      divs.push_back(i);
        if(i!=n/i) {
        divs.push_back(n/i);
        }
    }
  }
  sort(divs.begin(),divs.end());
  for(auto x: divs){
  cout<<x<<" "; 
  }
}
cout<<divs.size();
````
**odd divisor**
- Square count 

**primes**
- Which divisor count only 2

**Composite number**
- at least divisor count 3
- 1 is only Unit number

