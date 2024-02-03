#include<iostream>

using namespace std;

int main () {
  string s;
  cin >> s;
  int n = s.length();
  int ans = 1;
  int maxans = 1;
  for (size_t i = 0; i < n - 1; i++)
  {
    if(s[i] == s[i + 1]) ans++; else ans = 1;
    maxans = max(ans, maxans);
  }
  cout << maxans << endl;
  
  return 0;
}