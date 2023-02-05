#include<iostream>
using namespace std;







main()
{
    int n ; 
    float sum = 0;

    cout << "Enter number of resistors: ";
    cin >> n;

    float res[n];



    for (int i = 0; i <n; i++)
    {
        cout << "Enter element: ";
        cin >> res[i];

        sum = sum + res[i];
    
    }

    cout << "Total resistence is: " << sum << " ohms" <<endl;
    
   
}
