#include<bits/stdc++.h>

using namespace std;

bool isomorphic(string s, string t){

   int m1[256] = {0}, m2[256] = {0};

   int n = s.size();

  // traversing through string
   for(int i=0; i<n; i++){
    if(m1[s[i]] != m2[t[i]]) return false;

    m1[s[i]] = i + 1;
    m2[t[i]] = i + 1;
   }
   return true;
}
int main(){

  int n, m;
  cin >> n >> m;

  string s, t;
  cin >> s >> t;
 
  cout << isomorphic(s,t);
  return 0;
}