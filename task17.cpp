#include<iostream>
using namespace std;







main()
{
    
    float due , total , quater , dimes , nickels , pennies;

    cout << "Enter payable amount: ";
    cin >> due;

    float change[4];

    cout << "Enter change in order (quaters, dimes , nickels , pennies)";
    cin >> change[0] >> change[1] >> change[2] >> change[3];

    quater = (change[0]*25)/100;
    dimes = (change[1]*10)/100;
    nickels = (change[2]*5)/100;
    pennies = (change[3]*1)/100;

    total = quater + dimes + nickels + pennies;

    if (total > due)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    



    


}