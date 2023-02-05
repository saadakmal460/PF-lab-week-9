#include<iostream>
using namespace std;




main()
{
    int size;

    cout << "Enter number: ";
    cin >> size;

    int x[size];

    for (int i = 0; i < size; i++)
    {
        
        cout << "Enter element: ";
        cin >> x[i];

    }


    for (int i = size-1; i >= 0 ; i--)
    {

        cout << x[i] << " ";
    
    }
    
    

}