#include<iostream>
using namespace std;







main()
{


    string x;
    
    cout << "Enter name: ";
    getline(cin , x);

    int i=0;


    while (x[i] != '\0')
    {
        cout << "The chararceter at index " <<i << " is " <<x[i] <<endl;
        i++;
    }
    

    
}