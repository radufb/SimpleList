#include "include/list.h"

void List::print_menu() {
    int choice;

    cout << "*****************\n";
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete from list.\n";
    cout << " 4 - Qute.\n";
    cout << " Enter your choice and press return: ";
    cin >> choice;

    switch(choice){
        case 1:
            print_list();
            break;
        case 2:
            add_item();
            break;
        case 3:
            delete_item();
        case 4:
            exit(0);
        default: 
            cout << "Sorry choice not implemented yet\n"; 
    }
}

void List::add_item() {
    cout << "\n\n\n\n\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: ";
    
    string item;
    cin >> item;

    list.push_back(item);
    
    cout << "Successfully added an item to the list \n\n\n\n\n\n";
    cin.clear(); //clearing to make sure there is nothing stuck in the console buffer

    print_menu();
}

void List::delete_item() {
    cout << "*** Delete item ***\n";
    cout << "Select an item index number to delete: \n";
    
    if(list.size()) {
        for(int i = 0; i < (int)list.size(); ++i) {
            cout << i << ": " << list[i] << "\n";
        }
    } else {
        cout << "No items to delete.\n";
    }

    int choice;
    cin >> choice;
    if(choice < (int)list.size() || choice >= 0) 

    print_menu();
}

void List::print_list() {
    cout << "\n\n\n\n\n\n\n";
    cout << "*** Printing List ***\n";

    for(int i = 0; i < (int)list.size(); ++i) {
            cout << " * " << list[i] << "\n";
    }

    cout << "M - Menu \n";
    char choice;
    cin >> choice;

    if(choice == 'M' || choice == 'm') {
        print_menu();
    } else {
        cout << "Invalid Choice. Quitting...\n";
    }
}