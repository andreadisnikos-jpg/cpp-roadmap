#include<iostream>
#include "../include/menu.h"

using namespace std;

void showMenu()
{std::cout << "========================\n";
    cout << "        WolfPack\n";
    cout << "========================\n\n";

    cout << "1. Calculator\n";
    cout << "2. BMI Calculator\n";
    cout << "3. Unit Converter\n";
    cout << "4. Exit\n\n";

    cout << "Choice: ";

    //Declaration of the variable to store the user's choice
    int choice;
    cin >> choice;

    //Switch statement to handle the user's choice
    switch (choice)
    {
    case 1:
        cout <<choice<< ". Calculator\n";
        break;

    case 2:
        cout <<choice<< ". BMI Calculator\n";
        break;

    case 3:
        cout <<choice<< ". Unit Converter\n";
        break;

    case 4:
        cout <<choice<< ". Exiting...\n";
        exit(0);

    default:
        cout << "Invalid choice\n";
        break;
    }

}