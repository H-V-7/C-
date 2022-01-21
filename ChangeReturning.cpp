#include <iostream>

using namespace std;
//used for conversion 
int cents{};
const long int dollar {100};
const long int quater {25};
const long int dime {10};
const long int nickel {5};
const long int penny {1};

int main() {
    
    long int balance {}; //to keep track of balance to refund change
    cout << "Enter an amount in cents:" << "" << endl;
    cin >> cents ;
    //dollar calculations
    long int returnDollars = cents/dollar;
    balance = cents - (returnDollars*dollar); //balance
   

    //quater calculations
    long int returnQuaters = balance/quater;
    balance -= returnQuaters*quater; //Compound assignment
    
    //dime calculations
    long int returnDimes = balance/dime;
    balance -= returnDimes*dime;
    
    //nickel calculations
    long int returnNickel = balance/nickel;
    balance -= returnNickel*nickel;

    //penny calculations
    long int returnPenny = balance/penny;
    balance -= returnPenny*penny;
    

    cout << "This change of " << cents << " " << "cents can be provided as follows:" << endl;
   
    cout << "Dollars:" << returnDollars << endl;
    cout << "Quaters:" << returnQuaters << endl;
    cout << "Dimes:" << returnDimes << endl;
    cout << "Nickels:" << returnNickel << endl;
    cout << "Pennies:" << returnPenny << endl;

   
    return 0;
}
