#include<iostream>
using namespace std;





main()
{


    string word;
    char x;

    cout << "Enter name: ";
    getline(cin , word);


    int count = 0;


    while (word[count] != '\0')
    {
        count++;
    }

    cout << "Enter character you want to compare: ";
    cin >> x;



    if (word[count-1] == x)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    

    



}