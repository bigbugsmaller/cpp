#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[10000];
    // taking input of elements
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int sum = 0;
    // adding elements
    for (int t = 0; t < n; t++)
    {
        sum = sum + array[t];
    }
    cout << sum << endl;
}