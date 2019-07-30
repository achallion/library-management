void adminpage()
{
    int x = graphics();
    switch(x)
    {
        case 1 :
            nbooks();
            break;
        case 2 :
            nmember();
            break;
        case 3 :
            rbooks();
            break;
        case 4 :
            rmember();
            break;
        case 5 :
            ibooks();
            break;
        case 6 :
            dbooks();
            break;
        case 7 :
            vmember();
            break;
        case 8 :
            vstock();
            break;
        case 9 :
            lbooks();
            break;
        case 10 :
            exit(1);
            break; 
    }
}