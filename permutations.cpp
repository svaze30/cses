#include<iostream>

using namespace std;

int main () {
  int n;
  cin >> n;
  int x = n;
  if (n == 2 || n == 3) {
    cout << "NO SOLUTION";
  } else if (n == 4) {
    cout << "3 1 4 2";
  } else {
    for (size_t i = 0; i < n; i++)
    {
      cout << x << " ";
      x -= 2;
      if (x < 1) x = n -1;
    }
    
  }
  cout << endl;
  return 0;
}