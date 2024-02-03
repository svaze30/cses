#include<iostream>

using namespace std;

int main () {
  int n;
  cin >> n;
  if ( n % 4 == 0) {
    cout << "YES" << endl;
    cout << n/2 << endl;
    for (size_t i = 1; i <= n/4; i++)
    {
      cout << i << " " ;
    }
    for (size_t i = n; i > 3 * n/4; i--)
    {
      cout << i << " " ;
    }
    cout << endl;
    
    cout << n/2 << endl;
    for (size_t i = n/4 + 1; i <= 3 * n/4; i++)
    {
      cout << i << " " ;
    }
    cout << endl;
  } else if ((n+1) % 4 == 0) {
    cout << "YES" << endl;
    int l = (n+1)/4;
    cout << 2*l - 1 << endl;
    cout << n << " " ;
    for (size_t i = 1; i < l; i++)
    {
      cout << i << " " << n-i << " " ;
    }
    cout << endl;
    cout << n + 1 - 2*l << endl;
    for (size_t i = l; i <= n - l; i++)
    {
      cout << i << " " ;
    }
    cout << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}