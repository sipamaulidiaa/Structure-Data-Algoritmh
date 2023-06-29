#include <iostream>
#include <string>

struct Contact {
    std::string name;
    std::string phone;
    Contact* next;
};

Contact* head = nullptr;

void addContact(const std::string& name, const std::string& phone) {
    Contact* newContact = new Contact;
    newContact->name = name;
    newContact->phone = phone;
    newContact->next = nullptr;

    if (head == nullptr) {
        head = newContact;
    } else {
        Contact* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newContact;
    }

    std::cout << "Contact added: " << name << " (" << phone << ")" << std::endl;
}

void displayContacts() {
    if (head == nullptr) {
        std::cout << "Contact list is empty." << std::endl;
    } else {
        std::cout << "Contact List:" << std::endl;
        Contact* current = head;
        while (current != nullptr) {
            std::cout << "- " << current->name << " (" << current->phone << ")" << std::endl;
            current = current->next;
        }
    }
}

void searchContact(const std::string& name) {
    if (head == nullptr) {
        std::cout << "Contact list is empty." << std::endl;
        return;
    }

    Contact* current = head;
    while (current != nullptr) {
        if (current->name == name) {
            std::cout << "Contact found: " << current->name << " (" << current->phone << ")" << std::endl;
            return;
        }
        current = current->next;
    }

    std::cout << "Contact not found: " << name << std::endl;
}

int main() {
    int choice;
    std::string name, phone;

    do {
        std::cout << "Contact List Menu" << std::endl;
        std::cout << "1. Add contact" << std::endl;
        std::cout << "2. Display contacts" << std::endl;
        std::cout << "3. Search contact by name" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter contact name: ";
                std::cin >> name;
                std::cout << "Enter contact phone number: ";
                std::cin >> phone;
                addContact(name, phone);
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                std::cout << "Enter contact name to search: ";
                std::cin >> name;
                searchContact(name);
                break;
        }
    } while (choice != 4);

    return 0;
}

