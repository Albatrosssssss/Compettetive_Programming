  vector<int> v= {2,3,4,5}; //value 
  v.resize(10)  //Resize
  v.clear //Clear
  vector<int> v(10);
  sort(v.begin()+1, v.end()+3); //smaller to greater
  sort(v.begin()+1, v.end()+3, greater<int>() ); //greater to smaller
  sort(v.rbegin(), v.rend())
  
