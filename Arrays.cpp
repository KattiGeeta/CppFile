#include<iostream>
using namespace std;
int main()
{
    int n;
    int mult = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
     mult *= a[i];
    }
    for (int i = 0; i < n;++i)
    {
        cout <<a[i]<<" ";
    }

    cout << mult;
}