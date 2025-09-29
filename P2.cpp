//Name: Varnika Maurya
//PRN: 24070123160
//Exp No. 16
//Program No.: 2
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1;
    cout << "Enter age of person: ";
    cin >> n1;
    try 
    {
        if (n1 < 18) 
            throw n1;
        else 
            cout << "Age : " << n1 << "\n APPROVED " << "\n";
    }
    catch(int a) 
    {
        cout << "\nERROR : UNDERAGE !! (" << a <<")"<< "\n";
    }
}

/* 
Output :
Enter age of person : 12
ERROR : UNDERAGE !! (12)
*/
