#include <iostream>
#include <stdlib.h>
#include "conio.hpp"
#include <time.h>

using namespace std;

#include "welcome.cpp"
#include "login.cpp"
#include "adminfunctions.cpp"
#include "adminpage.cpp"

int main()
{
    welcome();
    sleep(2);
    login();
    adminpage();
}