#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout << "Select the drink you want to drink!(tea,coffee,water,soda,soft-drink)\n";
    cin >> x;
    if(x==1)
    {
        cout << "You selected Tea!";
    }
    else if (x==2)
    {
        cout << "You selected Coffee!";
    }
    else if (x==3)
    {
        cout << "You selected Water!";
    }
    else if (x==4)
    {
        cout << "You selected Soda!";
    }
    else if (x==5)
    {
        cout << "You selected Soft-Drink!";
    }
    else 
    {
        cout << "Invalid Drink!";
    }
    
}