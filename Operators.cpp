#include <iostream>
using namespace std;
//eigene Methode
int operation(int dec, int x, int y){
        switch (dec)
        {
        case 1:
            return x*y;
            break;
        case 2:
            if(y!=0){
            return x/y; //nur Ganzzahl Division!
            } else
            {
                cout << "Division durch 0 nicht möglich! Lege einen anderen Wert fest.\n";
                cout << "Neuer y-Wert: ";
                cin >> y;
                operation(dec, x, y);
            }
            break;
        case 3:
            return x+y;
            break;
        case 4:
            return x-y;
            break;
        case 5:
            return x%y;
            break;
        default:
            cout << "That number is not between 1-5! Try again";
            break;
        }
    }

int main()
{
    //Var-Dec
    int x;
    int y;
    int dec =0;

    //Main OPs
    cout << "Was sind deine Zahlen?\n";
    cout << "x: ";
    cin >> x;
    cout << endl;
    cout << "y: ";
    cin >> y;
    cout << endl;
    cout << "Was willst du tun?\n\n";
    cout << "Multiplizieren (1)\n";
    cout << "Dividieren (2)\n";
    cout << "Addieren (3)\n";
    cout << "Subtrahieren (4)\n";
    cout << "Modulo (5)\n";
    cout << "Auswahl: ";
    cin >> dec;
    cout << operation(dec, x, y)<< endl;
}