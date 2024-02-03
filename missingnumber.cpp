#include<iostream>

using namespace std;

int main () {
  int n;
  cin >> n;
  int arr[n + 1];
  for (size_t i = 1; i <= n; i++)
  {
    arr[i] = 0;
  }
  for (size_t i = 1; i < n; i++)
  {
    int t; 
    cin >> t;
    arr[t] = 1;
  }
  for (size_t i = 1; i <= n; i++)
  {
    if (arr[i] == 0) {
      cout << i << endl;
      break;
    }
  }
  
  

  
  return 0;
}