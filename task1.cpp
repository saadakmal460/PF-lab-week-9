#include<iostream>
using namespace std;





main()
{
    int x[5];
    int sum = 0;
    
    cout << "Enter five digits: ";

    for (int i = 0; i < 5; i++)
    {
       
        cin >> x[i];

        sum = sum + x[i];

    }

    cout << sum;
    


}