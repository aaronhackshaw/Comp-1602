#include <iostream>
#include <fstream>

using namespace std;

struct Produce {
    int code;
    string name;
    double price;
    int quantity;
};

int loadProduce(Produce produceList[]) {
    ifstream inputFile("produce.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening produce.txt" << endl;
        return 0;
    }

    int numProduce = 0;
    while (inputFile >> produceList[numProduce].code) {
        if (produceList[numProduce].code == 0) {
            break;
        }
        inputFile.ignore(); // Ignore whitespace after code
        getline(inputFile, produceList[numProduce].name);
        inputFile >> produceList[numProduce].price >> produceList[numProduce].quantity;
        numProduce++;
    }

    inputFile.close();
    return numProduce;
}

int searchProduce(Produce produceList[], int numProduce, int produceCode) {
    for (int i = 0; i < numProduce; i++) {
        if (produceList[i].code == produceCode) {
            return i;
        }
    }
    return -1;
}

void createInvoice(Produce produceList[], int numProduce) {
    ifstream inputFile("invoice.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening invoice.txt" << endl;
        return;
    }

    string customerId, customerName;
    getline(inputFile, customerId);
    getline(inputFile, customerName);

    cout << "Invoice for Customer ID: " << customerId << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "---------------------------------------" << endl;

    double totalPrice = 0;
    int produceCode, amount;
    while (inputFile >> produceCode) {
        if (produceCode == 0) {
            break;
        }
        inputFile >> amount;

        int index = searchProduce(produceList, numProduce, produceCode);
        if (index != -1 && produceList[index].quantity >= amount) {
            cout << produceList[index].name << "   "
                 << produceList[index].price << "   "
                 << amount << "   "
                 << produceList[index].price * amount << endl;
            totalPrice += produceList[index].price * amount;
            produceList[index].quantity -= amount; // Update stock
        } else {
            cout << "Insufficient quantity for produce code " << produceCode << endl;
        }
    }

    cout << "---------------------------------------" << endl;
    cout << "Total: $" << totalPrice << endl;

    inputFile.close();
}

int main() {
    Produce produceList[100];
    int numProduce = loadProduce(produceList);

    createInvoice(produceList, numProduce);

    return 0;
}
