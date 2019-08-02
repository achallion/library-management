class book
{
    public:
        int booknumber;
        string title;
        string author;
        int edition;
        int totalquantity;
        int availablequantity;
        static int totalbooktypes;

        book()
        {
            totalbooktypes++;
            booknumber = totalbooktypes;
        }

        ~book()
        {
        }

        void insert()
        {
            cout << "\nEnter Title of Book : ";
            getline(cin, title);
            cout << "\nEnter Author of Book : ";
            getline(cin, author);
            cout << "\nEnter Edition Number : ";
            cin >> edition;
            cout << "\nEnter Total Quantities Of Book : ";
            cin >> totalquantity;
            availablequantity = totalquantity;
        }
};

int book ::totalbooktypes = 0;

int graphics()
{
    while(true)
    {
        int x;
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t1. Add new books";
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
        cin.ignore();
        if (x < 10 or x > 1)
        {
            return x;
        }
    }
}

void addbook()
{
    ofstream fout;
    fout.open("./datafile/books.dat",ios :: out | ios :: binary);
    if(fout.fail())
    {
        clrscr(os);
        cout << "Error : Can't Open File\nPlease Retry";
        return;
    }
    book temp;
    temp.insert();
    fout.write((char *)&temp, sizeof(temp));
    fout.close();
    cout << "\n\n\n\n\n\n\t\t\t\t\tBook Added Successfully !!!";
}

void addmember()
{

}