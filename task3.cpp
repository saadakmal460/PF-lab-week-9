#include<iostream>
using namespace std;





main()
{
    int n , sum = 0, avg = 0;
    cout << "Enter number of integer: ";
    cin >> n;


    int x[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> x[i];

        sum = sum + x[i];

    }

    avg = sum/n;

    cout << "Sum of integers is : " << sum <<endl;
    cout << "Average of integers is : " << avg <<endl;



     

}