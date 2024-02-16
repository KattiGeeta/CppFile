#include<iostream>
using namespace std;
int main ()
{

    int m;
    int n;
    cin >> m;
    cin >> n;
    for (int i = 1; i <= m;++i){
        for (int i = 1; i <= n;++i){
            cout << "* ";
        }
        cout << endl;
    }

}