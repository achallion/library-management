#include <iostream>
#include <string>
#include <fstream>

using namespace std;

char os[] = "linux";

#include "welcomepage.cpp"
#include "loginpage.cpp"
#include "resetpage.cpp"
#include "adminpage.cpp"

int main()
{
    cout << login();
    return 0;
}