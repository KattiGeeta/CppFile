#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;
    int count;
    while (x != 0)
    {
        x = x / 10;
        cout << x++;
    }
    cout << count;
}