#include <bits/stdc++.h>
using namespace std;

string numeAlegere(int x) {
    if (x == 1) return "Piatra";
    if (x == 2) return "Hartie";
    return "Foarfeca";
}

int main() {
    srand(time(0));

    int scor_om = 0, scor_pc = 0;
    int alegere_om, alegere_pc;

    cout << "=== PIATRA - HARTIE - FOARFECA (pana la 3 puncte) ===\n";

    while (scor_om < 3 && scor_pc < 3) {
        cout << "\nAlege cifra: 1 - Piatra | 2 - Hartie | 3 - Foarfeca: ";
        cin >> alegere_om;

        if (alegere_om < 1 || alegere_om > 3) {
            cout << "Alegere invalida! Introdu 1, 2 sau 3.\n";
            continue;
        }

        alegere_pc = rand() % 3 + 1;

        cout << "Tu ai ales: " << numeAlegere(alegere_om) << "\n";
        cout << "Calculatorul a ales: " << numeAlegere(alegere_pc) << "\n";

        if (alegere_om == alegere_pc) {
            cout << "Egalitate!\n";
        } else if ((alegere_om == 1 && alegere_pc == 3) ||
                   (alegere_om == 2 && alegere_pc == 1) ||
                   (alegere_om == 3 && alegere_pc == 2)) {
            cout << "Ai castigat runda!\n";
            scor_om++;
        } else {
            cout << "Calculatorul a castigat runda!\n";
            scor_pc++;
        }

        cout << "Scor -> Tu: " << scor_om << " | Calculator: " << scor_pc << "\n";
    }

    cout << "\n==============================\n";
    if (scor_om == 3) {
        cout << "FELICITARI! Ai castigat meciul!\n";
    } else {
        cout << "Ai pierdut! Calculatorul a castigat meciul.\n";
    }

    return 0;
}