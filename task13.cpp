#include<iostream>
using namespace std;







main()
{
    string letters = "abcdefghijklmnopqrstuvwxyz";
    string word;

    cout << "Enter word: ";
    getline(cin , word);

    int wordLenght = word.length();
    int letterLength = letters.length();


    for (int i = 0; i < wordLenght; i++)
    {
        for (int j = 0; j < letterLength; j++)
        {
            if(word[i] == letters[j])
            {
                cout << letters[j+1];
            }

            if (word[i] == 'z')
            {
                cout << 'a';
                break;
            }
            
        }

        
    }


    
}