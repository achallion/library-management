void adminpage()
{
    welcome();
    int x = graphics();
    switch(x)
    {
        case 1 :
            addbook();
            break;
        /*case 2 :
            addmember();
            break;
        case 3 :
            removebook();
            break;
        case 4 :
            removemember();
            break;
        case 5 :
            issuebook();
            break;
        case 6 :
            depositbook();
            break;
        case 7 :
            viewmember();
            break;
        case 8 :
            viewstock();
            break;
        case 9 :
            listissuedbooks();
            break;
        case 10 :
            exit(1);
            break; */
    }
}