#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct StockItem {
    string name;
    int quantity;
    double price;
};

class StockManager {
private:
    vector<StockItem> stock;

public:
    void addItem(const string& itemName, int itemQuantity, double itemPrice) {
        StockItem newItem;
        newItem.name = itemName;
        newItem.quantity = itemQuantity;
        newItem.price = itemPrice;

        stock.push_back(newItem);
        cout << "Item added successfully." << endl;
    }

    void displayStock() {
        cout << "Stock List:" << endl;
        for (const StockItem& item : stock) {
            cout << "Name: " << item.name << ", Quantity: " << item.quantity << ", Price: $" << item.price << endl;
        }
    }
};

int main() {
    StockManager stockManager;

    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. Add item" << endl;
        cout << "2. Display stock" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                int quantity;
                double price;

                cout << "Enter name of item: ";
                cin.ignore(); // Clear the input buffer
                getline(cin, name);

                cout << "Enter quantity of item: ";
                cin >> quantity;

                cout << "Enter price of item: ";
                cin >> price;

                stockManager.addItem(name, quantity, price);
                break;
            }
            case 2:
                stockManager.displayStock();
                break;
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option (1-3)." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
