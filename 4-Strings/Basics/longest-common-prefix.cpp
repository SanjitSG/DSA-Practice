#include<bits/stdc++.h>

using namespace std;

void prefix(vector<string>& s){
  int n = s.size();

  sort(s.begin(), s.end());

  string start = s[0];
  string last = s[n-1];

  string ans = "";

  int minn = min(start.size(), last.size());

  for(int i=0; i<minn; i++){
    if(start[i] != last[i]) break;
    ans += start[i];
  }
  cout << ans;
}

int main(){
int n;
cin>> n;

  vector<string> str;
  for(int i = 0; i<n; i++){
    string s;
    cin >> s;
    str.push_back(s);
  }

  prefix(str);
      return 0;
}