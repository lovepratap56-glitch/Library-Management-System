#include <iostream>
using namespace std;

int main()
{
    string bookName;
    int bookId, choice;
    bool issued = false;

    cout << "Enter Book ID: ";
    cin >> bookId;

    cout << "Enter Book Name: ";
    cin >> bookName;

    do
    {
        cout << "\n===== Library Management System =====";
        cout << "\n1. Display Book";
        cout << "\n2. Issue Book";
        cout << "\n3. Return Book";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nBook ID: " << bookId;
                cout << "\nBook Name: " << bookName;
                cout << "\nStatus: ";
                if(issued)
                    cout << "Issued\n";
                else
                    cout << "Available\n";
                break;

            case 2:
                if(!issued)
                {
                    issued = true;
                    cout << "Book Issued Successfully!\n";
                }
                else
                {
                    cout << "Book Already Issued!\n";
                }
                break;

            case 3:
                if(issued)
                {
                    issued = false;
                    cout << "Book Returned Successfully!\n";
                }
                else
                {
                    cout << "Book is Already Available!\n";
                }
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}
