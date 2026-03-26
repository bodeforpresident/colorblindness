#include <iostream>
using namespace std;

// Declare functions
void inputs(int& mother, int& father); // Input function
void squares(int& mother, int& father, int& loop, char& keyIn); // Output function

int main() {
    // Declare functions
    int mother, father, loop;
    char keyIn;
    
    // Run functions
    do {
    inputs(mother, father);
    squares(mother, father, loop, keyIn);
    } while (loop == 1);
}

// Define functions
void inputs(int& mother, int& father) {
    cout << "Welcome to the Colorblind Calculator!\n";
    cout << "To use: Follow the instructions that appear on screen.\n\n";
    
    // Input Section, Mother
    cout << "If the mother is not colorblind, enter 1.\nIf the mother is colorblind, enter 2.\nIf the mother is a carrier for colorblindness, enter 3.\n";
    cin >> mother;
    
    // Validation
    while (!mother) {
        cout << "Please enter your number again.\n";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> mother;
    }
    while (mother < 1 || mother > 4) {
        cout << "Please enter zero, one, or two.\n";
        cin >> mother;
    }
    
    // Input Section, Father
    cout << "If the father is not colorblind, enter 1.\nIf the father is colorblind, enter 2.\n";
    cin >> father;
    
    // Validation
    while (!father) {
        cout << "Please enter your number again.\n";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> father;
    }
    while (father < 1 || father > 2) {
        cout << "Please enter zero, one, or two.\n";
        cin >> father;
    }    
}

// Punnett square functions
void squares(int& mother, int& father, int& loop, char& keyIn) {
    cout << "This is your punnet square:\n\n";
    if (mother == 1 & father == 1) { // First punnett square
        cout << "    |   XB    |    XB   |\n";
        cout << "=========================\n";
        cout << "XB  |XBXB     |XBXB     |\n";
        cout << "=========================\n";
        cout << "Y   |XBY      |XBY      |\n";
        cout << "=========================\n\n";
        cout << "Chance of a colorblind child: 0%\n";
    } else if (mother == 2 & father == 1) { // Second punnett square
        cout << "    |   Xb    |    Xb   |\n";
        cout << "=========================\n";
        cout << "XB  |XBXb     |XBXb     |\n";
        cout << "=========================\n";
        cout << "Y   |XbY      |XbY      |\n";
        cout << "=========================\n\n";
        cout << "Chance of a colorblind child: 0%\n";
        cout << "Chance of carriers for colorblindness: 100%\n";
    } else if (mother == 3 & father == 1) { // Third punnett square
        cout << "    |   XB    |    Xb   |\n";
        cout << "=========================\n";
        cout << "XB  |XBXB     |XBXb     |\n";
        cout << "=========================\n";
        cout << "Y   |XBY      |XbY      |\n";
        cout << "=========================\n\n";  
        cout << "Chance of a colorblind child: 25%\n";
        cout << "Chance of carriers for colorblindness: 25%\n";
    } else if (mother == 1 & father == 2) { // Fourth punnett square
        cout << "    |   XB    |    XB   |\n";
        cout << "=========================\n";
        cout << "Xb  |XBXb     |XBXb     |\n";
        cout << "=========================\n";
        cout << "Y   |XBY      |XBY      |\n";
        cout << "=========================\n\n";
        cout << "Chance of a colorblind child: 0%\n";
        cout << "Chance of carriers for colorblindness: 50%\n";
    } else if (mother == 2 & father == 2) { // Fifth punnett square
        cout << "    |   Xb    |    Xb   |\n";
        cout << "=========================\n";
        cout << "Xb  |XbXb     |XbXb     |\n";
        cout << "=========================\n";
        cout << "Y   |XbY      |XbY      |\n";
        cout << "=========================\n\n";
        cout << "Chance of a colorblind child: 100%\n";
    } else if (mother == 3 & father == 2) { // Sixth punnett square
        cout << "    |   XB    |    Xb   |\n";
        cout << "=========================\n";
        cout << "Xb  |XBXb     |XbXb     |\n";
        cout << "=========================\n";
        cout << "Y   |XBY      |XbY      |\n";
        cout << "=========================\n\n";
        cout << "Chance of a colorblind child: 50%\n";
        cout << "Chance of carriers for colorblindness: 25%\n";
    }
    cout << "\nPress Y to run the program again. Press any other key to quit.\n";
    cin >> keyIn;
    if (keyIn == 'y') {
        loop = 1;
    } else {
        loop = 0;
        cout << "Goodbye!";
    }
}
