void login()
{
    while(true){
    clrscr(os);
    int pass;
    cout << "\n\n\t\t\t\t\t\t\t\tEnter your 4 digit password : ";
    cin >> pass;
    
    if(pass==1234){
        return;
    }else
    {
        cout << "\n\n\t\t\t\t\t\t\t\tWrong password entered, press r to retry or x to exit: "<<flush;
        char ch;
        cin >> ch;
        if (ch == 'r')
        {
            continue;
        }else if(ch=='x')
        {
            exit(1);
        }else
        {
            cout << "\n\n\t\t\t\t\t\t\t\tYou don't even know alphabets!";
            exit(1);
        }
        }
    } 
}