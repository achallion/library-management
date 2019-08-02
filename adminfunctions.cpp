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

struct member
{
    string code;
    string name;
    string number;
    int age;
    int validtillyear;
    void makecode()
    {
        code = name[0];
        code += name[1];
        code += number[9];
        code += (char)(48 + (age % 10));
        code += (char)(48 + (validtillyear % 10));
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
    clrscr(os);
    ofstream fout;
    fout.open("./datafile/books.dat",ios :: out | ios :: binary);
    if(fout.fail())
    {
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
    welcome();
    ofstream fout("./datafile/members.dat", ios ::out | ios ::binary);
    if(fout.fail())
    {
        cout << "Error : Can't Open File\nPlease Retry";
        return;
    }
    member temp;
    cout << "\n\n\n\n\t\tEnter Member Name : ";
    getline(cin, temp.name);
    cout << "\n\n\t\tEnter Phone Number for Member : ";
    getline(cin, temp.number);
    cout << "\n\n\t\tEnter Age : ";
    cin >> temp.age;
    cout << "\n\n\t\tEnter Valid Till Year : ";
    cin >> temp.validtillyear;
    temp.makecode();
    cout << "\n\n\n\t\tYour Code Is " << temp.code;
    fout.write((char *)&temp, sizeof(temp));
    fout.close();
}