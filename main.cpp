#include <iostream>
using namespace std;

int main() 
{
    int bambini, adulti, postiTot;
    float occupati, daLiberare;
    postiTot = 30;
    occupati = 0;
    do {
        cout << "quanti adulti salgono?" << endl;
        cin >> adulti;
        cout << "quanti bambini salgono?" << endl;
        cin >> bambini;
        occupati = occupati + adulti + (bambini / 2);
    } while (occupati < postiTot);
    if (occupati > postiTot) {
        daLiberare = occupati - postiTot;
        cout << "da liberare " << daLiberare << " posti" << endl;
    }
    cout << "la giostra può partire" << endl;
}