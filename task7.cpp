#include<iostream>
using namespace std;






main()
{
    int size , n , product;
    int smallest = 1000;
    

    cout << "Enter size of array: ";
    cin >> size;

    int x[size];


    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> x[i];

        if (x[i] < smallest)
        {
            smallest = x[i];
        }
        
    }
    cout << "Smallest number is: "<< smallest;



}