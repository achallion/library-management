int graphics()
{
    while(true)
    {
        clrscr(os);
        int x;
        cout << "\n\n\t\t\t\t\t\t\t\t1. Add new books";
        cout << "\n\n\t\t\t\t\t\t\t\t2. Add new member";
        cout << "\n\n\t\t\t\t\t\t\t\t3. Remove a book";
        cout << "\n\n\t\t\t\t\t\t\t\t4. Remove a member";
        cout << "\n\n\t\t\t\t\t\t\t\t5. Issue a book";
        cout << "\n\n\t\t\t\t\t\t\t\t6. Deposit a book";
        cout << "\n\n\t\t\t\t\t\t\t\t7. View member's accout";
        cout << "\n\n\t\t\t\t\t\t\t\t8. View stock";
        cout << "\n\n\t\t\t\t\t\t\t\t9. List of books issued";
        cout << "\n\n\t\t\t\t\t\t\t\t10.Exit";
        cout << "\n\n\n\n\t\t\t\t\t\t\t\t Enter your choice: ";
        cin >> x;
        if(x < 10 or x > 1)
        {
            return x;
        }
    }
}