#include <iostream>
using namespace std;






main()
{
    int size;

    cout << "Enter a number: ";
    cin >> size;

    int arr[size];

    

    for (int i = 0; i < size; i++)
    {
        
        cout << "Enter element: ";
        cin >> arr[i];


    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    
    

}