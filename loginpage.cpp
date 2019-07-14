#include <boost/algorithm/string.hpp>
#include <stdio.h>
#include "getch.hpp"
#include <stdlib.h>

using namespace boost;

struct user // struct for username password
{
    string username;
    string password;
};

bool login() // Asks For librarian login
{
    clrscr(os); //clears the screen
    char ch;
    user temp, correct;     //temp is for user input and correct is correct username and password
    cout << "\t\t\t\t\t\t\t\t\t\t\t AUTHENTICATION PAGE \n\t\t\t\t\t\t\t\t\t\t\t---------------------\n\t\t\t\t\t\t\t\t\t\t\t---------------------";
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Username : ";
    getline(cin, temp.username);    //input username
    cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t Password : ";
    do      // Input password in coded form
    {
        ch = getch();
        if ((int)ch == 10)
            break;
        cout << '*';
        temp.password.push_back(ch);
    } while (true);
    ifstream fin;
    fin.open("login.dat", ios::in | ios::binary);                                                              // Open a binary file
    fin.read((char *)&correct, sizeof(correct));                                                               // Read username and password
    if (to_lower_copy(temp.username) == to_lower_copy(correct.username) and temp.password == correct.password) // No casesensitive for username
        return true;                                                                                           // Return true if username and password matched
    return false;                                                                                              // Else return false
}