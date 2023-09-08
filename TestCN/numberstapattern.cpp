#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int start = 1;
    while (start <= n - i + 1)
    {
      cout << start;
      start++;
    }
    if (i > 1)
    {
      int star = 1;
      while (star <= 2 * (i - 1))
      {
        cout << "*";
        star++;
      }
    }
    int t=n-i+1;
    while (t >= 1)
    {
      cout << t;
      t--;
    }
    cout << endl;
    i++;
  }
}
