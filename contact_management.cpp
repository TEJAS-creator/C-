#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define the structure for storing contact details
struct Contact
{
    string name;
    string phoneNumber;
    string email;
};

// Function to add a new contact
void addContact(vector<Contact> &contacts)
{
    Contact newContact;

    cout << "Enter contact name: ";
    cin.ignore(); // To clear the newline left by previous input
    getline(cin, newContact.name);

    cout << "Enter phone number: ";
    getline(cin, newContact.phoneNumber);

    cout << "Enter email address: ";
    getline(cin, newContact.email);

    contacts.push_back(newContact); // Add new contact to the vector
    cout << "Contact added successfully!" << endl;
}

// Function to display all contacts
void viewContacts(const vector<Contact> &contacts)
{
    if (contacts.empty())
    {
        cout << "No contacts available." << endl;
        return;
    }

    cout << "List of contacts:" << endl;
    for (size_t i = 0; i < contacts.size(); ++i)
    {
        cout << "Contact " << i + 1 << ":" << endl;
        cout << "Name: " << contacts[i].name << endl;
        cout << "Phone: " << contacts[i].phoneNumber << endl;
        cout << "Email: " << contacts[i].email << endl;
        cout << "---------------------------" << endl;
    }
}

// Function to search for a contact by name
void searchContact(const vector<Contact> &contacts)
{
    string searchName;
    cout << "Enter name to search: ";
    cin.ignore(); // To clear the newline left by previous input
    getline(cin, searchName);

    bool found = false;
    for (const auto &contact : contacts)
    {
        if (contact.name == searchName)
        {
            cout << "Contact found!" << endl;
            cout << "Name: " << contact.name << endl;
            cout << "Phone: " << contact.phoneNumber << endl;
            cout << "Email: " << contact.email << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Contact not found!" << endl;
    }
}

// Main menu function
void displayMenu()
{
    cout << "\n*** Contact Management System ***" << endl;
    cout << "1. Add a new contact" << endl;
    cout << "2. View all contacts" << endl;
    cout << "3. Search for a contact" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
}

int main()
{
    vector<Contact> contacts; // Vector to store contacts
    int choice;

    // Loop to display menu and perform actions
    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            addContact(contacts); // Add a new contact
            break;
        case 2:
            viewContacts(contacts); // View all contacts
            break;
        case 3:
            searchContact(contacts); // Search for a contact
            break;
        case 4:
            cout << "Exiting the program..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
