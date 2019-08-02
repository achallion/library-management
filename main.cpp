#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#include "conio.hpp"

using namespace std;

string os = "linux";

#include "welcome.cpp" 
#include "login.cpp" // does user login
#include "adminfunctions.cpp" // contains all necessary admin functions
#include "adminpage.cpp" // binds all functions to adminpage()


int main()
{
    welcome(); // Welcome page
    sleep(2); // system waits for 2 seconds
    login(); // then asks user for login details
    adminpage(); // if login successful , then we go to admin page
}