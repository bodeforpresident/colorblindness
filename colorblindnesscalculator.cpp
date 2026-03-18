#include <iostream>
using namespace std;

/*
Things to do:

Finish all punnett squares
Finish genotypes
Finish phenotypes
Loop!

*/


// Function declarations
void input(bool& nf, bool& cf, bool& cbf, bool& nm, bool& cm, bool& cbm, int& gen, char& keyIn);
void squares(bool& nf, bool& cf, bool& cbf, bool& nm, bool& cm, bool& cbm);

int main()
{
    bool nf, cf, cbf, nm, cm, cbm;
    int gen;
    int x = 5000000;
    int y = 1;
    char keyIn;
    
    input(nf, cf, cbf, nm, cm, cbm, gen, keyIn); // Input function
    squares(nf, cf, cbf, nm, cm, cbm);
    
}

// Function definitions
void input(bool& nf, bool& cf, bool& cbf, bool& nm, bool& cm, bool& cbm, int& gen, char& keyIn) {
    cout << "=============================================\n";
    cout << "| Welcome to the colorblindness calculator! |\n";
    cout << "|===========================================|\n";
    cout << "| To use: Follow all instructions to get    |\n";
    cout << "| all probabilities of colorblindness in a  |\n";
    cout << "| punnett square and percentages.           |\n";
    cout << "=============================================\n\n";
    
    // Female input
    cout << "If the mother has no colorblindness, type N. If the mother is a carrier for colorblindness, type R. If the mother has colorblindness, type C.\n";
    cin >> keyIn;
        if (keyIn != 'n' and keyIn != 'N' and keyIn != 'r' and keyIn != 'R' and keyIn != 'c' and keyIn != 'C') do {
            cout << "Hey yo Hey yo Hey yo Hey yo Hey yo "; // Actually do this later don't leave this!!!!
        } while (-100 < 2);
        else {
            if (keyIn = 'n') {
                nf = true;
                cf = false;
                cbf = false;
            };
            if (keyIn = 'r') {
                cf = true;
                nf = false;
                cbf = false;
            };
            if (keyIn = 'c') {
                cbf = true;
                nf = false;
                cf = false;
            };
        }
        
    // Male input
    cout << "If the father has no colorblindness, type N. If the father is a carrier for colorblindness, type R. If the father has colorblindness, type C.\n";
    cin >> keyIn;
        if (keyIn != 'n' and keyIn != 'N' and keyIn != 'r' and keyIn != 'R' and keyIn != 'c' and keyIn != 'C') do {
            cout << "Hey yo Hey yo Hey yo Hey yo Hey yo "; // Actually do this later don't leave this!!!!
        } while (-100 < 2);
        else {
            if (keyIn = 'n') {
                nm = true;
                cm = false;
                cbm = false;
            };
            if (keyIn = 'r') {
                cm = true;
                nm = false;
                cbm = false;
            };
            if (keyIn = 'c') {
                cbm = true;
                nm = false;
                cm = false;
            };
        }
}
void squares(bool& nf, bool& cf, bool& cbf, bool& nm, bool& cm, bool& cbm) {
    cout << "This is your punnett square:\n\n\n";
        if (nf == 1) {
            if (nm == 1) {
                cout << "=============================================\n";
                cout << "| Not colorblind girl | Not colorblind girl |\n";
                cout << "=============================================\n";
                cout << "| Not colorblind boy  | Not colorblind boy  |\n";
                cout << "=============================================\n\n";
                cout << "0% chance of having a colorblind girl\n0% chance of having a colorblind boy\n";
                cout << "0% chance of having a carrier for colorblindness";
            }
            if (cm == 1) {
                cout << "=============================================\n";
                cout << "| Carrier girl        | Carrier girl        |\n";
                cout << "=============================================\n";
                cout << "| Not colorblind boy  | Not colorblind boy  |\n";
                cout << "=============================================\n\n";
                cout << "0% chance of having a colorblind girl\n0% chance of having a colorblind boy\n";
                cout << "50% chance of having a carrier for colorblindness";                
            }
        }
        if (cf == 1) {
            if (nm == 1) {
                cout << "=============================================\n";
                cout << "| Not colorblind girl | Carrier girl        |\n";
                cout << "=============================================\n";
                cout << "| Not colorblind boy  | Colorblind boy      |\n";
                cout << "=============================================\n\n";
                cout << "0% chance of having a colorblind girl\n25% chance of having a colorblind boy\n";
                cout << "25% chance of having a carrier for colorblindness";
            }
            if (cm == 1) {
                cout << "=============================================\n";
                cout << "| Carrier girl        | Colorblind girl     |\n";
                cout << "=============================================\n";
                cout << "| Not colorblind boy  | Colorblind boy      |\n";
                cout << "=============================================\n\n";
                cout << "0% chance of having a colorblind girl\n0% chance of having a colorblind boy\n";
                cout << "0% chance of having a carrier for colorblindness";                
            }
        }
}
