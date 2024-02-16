#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Select the city according to : \n[1)Pune  \n 2)Mumbai \n 3)Solapur \n 4)Kolhapur \n 5)Nagpur]\n";
    cin >> a;
    if(a==1)
    {
        cout << "Tickit for Pune is booked!";
    }
     else if (a==2)
     {
         cout << "Tickit for Mumbai is booked!";
     }
   else if (a==3)
     {
         cout << "Tickit for Solapur is booked!";
     }
     else if (a==4)
     {
         cout << "Tickit for Kolhapur is booked!";
     }
     else if (a==5)
     {
         cout << "Tickit for Nagpur is booked!";
     }  
     else
     {
         cout << "Toh jaana kaha hai bhai!?";
     }
}