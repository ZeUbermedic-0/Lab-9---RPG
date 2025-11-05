// Program to demonstrate an RPG * written by Group 3
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int selection = 0;
    int health = 0;
    char role[100];
    char msg[100];


    cout << "[ Welcome to the World of the Incursion! ]" << endl;
    cout << "Please select a role";
    cout << "\n Choose ... " << endl;
    cout << "1. for Count Doom" << endl;
    cout << "2. for the Countess of Crime" << endl;
    cout << "3. for the Spartan Warrior" << endl;
    cout << "4. for the Messenger of Incursion" << endl;
    cout << "5. for Sammy Student" << endl;
    cin >> selection;

    switch (selection)
    {
    case 1:
    {
        strcpy_s(role, "Count Doom");
        strcpy_s(msg, "Welcome ");
        strcat_s(msg, role);
        cout << msg << endl;
        cout << "We hope your role will be successful!\n";
        cout << "You have ... 100% health" << endl;
        health += 100;
        break;
    }
    case 2:
    {
        strcpy_s(role, "Countess of Crime");
        strcpy_s(msg, "Welcome ");
        strcat_s(msg, role);
        cout << msg << endl;
        cout << "We hope your role wil be successful!\n";
        cout << "You have ... 75% health" << endl;
        health += 75;
        break;                             
    }
        
    case 3:

    {
        strcpy_s(role, "Spartan Warrior");
        strcpy_s(msg, "Welcome ");
        strcat_s(msg, role);
        cout << msg << endl;
        cout << "WBe hope your role wil be successful!\n";
        cout << "You have ... 50% health" << endl;	
        health += 50;
        break;
    }
        
    case 4:
    {
        strcpy_s(role, "Messenger of Incursion");
        strcpy_s(msg, "Welcome ");
        strcat_s(msg, role);
        cout << msg << endl;
        cout << "We hope your role wil be successful!\n";
        cout << "You have ... 25% health" << endl;	
        health += 25;
        break;
    }
    
    
    case 5:
    {
        strcpy_s(role, "Sammy Student");
        strcpy_s(msg, "Welcome ");
        strcat_s(msg, role);
        cout << msg << endl;
        cout << "We hope your role wil be successful!\n";
        cout << "Sorry you have ... 0% health" << endl;	
        health += 0;
        break;
    }
    default:
        cout << "Invalid entry ... try again later" << endl;
    }
    
    // part 2 ... choosing a mission
    cout << "please select an objective";
    cout << "\n choose ... " << endl;
    cout << "1 for \"Get the Gold\"" << endl;
    cout << "2 for \"Capture the Fortress\"" << endl;
    cout << "3 for \"Enter the City\"" << endl;
    cout << "4 for \"Forest of Frenzy\"" << endl;
    cout << "5 for \"Battle for Midland\"" << endl;
    cin >> selection;
    int treasure = 0;
    switch (selection) {
    case 1: 
    {
        treasure += 10;
        cout << "Your mission is to retrieve the gold." << endl;
        cout << "Your initial treasure: " << treasure << endl;
        cout << "We wish that your mission is a success!" << endl;
        break;

    }
    case 2: 
    {
        treasure += 20;
        cout << "Your mission is to secure the fortress." << endl;
        cout << "Your initial treasure: " << treasure << endl;
        cout << "We wish that your mission is a success!" << endl;
        break;
    }
    case 3: 
    {
        treasure += 30;
        cout << "Your mission is to infiltrate the city." << endl;
        cout << "Your initial treasure: " << treasure << endl;
        cout << "We wish that your mission is a success!" << endl;
        break;
    }
    case 4: 
    {
        treasure += 40;
        cout << "Your mission is to survive the forest." << endl;
        cout << "Your initial treasure: " << treasure << endl;
        cout << "We wish that your mission is a success!" << endl;
        break;
    }
    case 5: 
    {
        treasure += 50;
        cout << "Your mission is to attack Midland." << endl;
        cout << "Your initial treasure: " << treasure << endl;
        cout << "We wish that your mission is a success!" << endl;
        break;
    }
    
    default:
        cout << "invalid entry ... try again later" << endl;
        return 1; //Exit if mission is invalid.
    
    }

    //Summary Ouput
    cout << "\nSummary of your journey:" << endl;
    cout << "Character: " << role << endl;
    cout << "Health: " << health << "%" << endl;
    cout << "Treasure: " << treasure << endl;

       
    return 0;
}
