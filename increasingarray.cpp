#include<iostream>

using namespace std;

int main () {
  int n;
  cin >> n;
  long long int arr[n];
  for (size_t i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  long long int ans = 0;
  for (size_t i = 1; i < n; i++)
  {
    if (arr[i-1] > arr[i]) {
      int yoyo = (arr[i-1] -arr[i]);
      ans += yoyo;
      arr[i] += yoyo;
    } 
  }
  
  cout << ans << endl;
  return 0;
}