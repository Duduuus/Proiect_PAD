# 🪨 📄 ✂️ Piatră, Hârtie, Foarfecă (C++)

Un joc clasic de **Piatră, Hârtie, Foarfecă** în consolă, scris în C++, în care joci de la tastatură împotriva calculatorului. Primul care ajunge la **3 puncte** câștigă meciul.

---

## ✨ Funcționalități

- **Joc până la 3 puncte** – scorul este actualizat și afișat după fiecare rundă.
- **Alegeri aleatorii** – calculatorul generează mutări random folosind `srand(time(0))` și `rand()`.
- **Validare input** – dacă introduci o valoare greșită (altceva decât `1`, `2` sau `3`), jocul te avertizează fără să piardă runda.
- **Interfață simplă în consolă** – ușor de citit și de jucat.

---

## 🎮 Regulile jocului

| Alegere | Tastă | Bate |
| :--- | :---: | :--- |
| **Piatră** 🪨 | `1` | Foarfecă ✂️ |
| **Hârtie** 📄 | `2` | Piatră 🪨 |
| **Foarfecă** ✂️ | `3` | Hârtie 📄 |

---

## 🚀 Cum se rulează

### 1. Local (cu un compilator C++ precum g++)

Clonează proiectul sau descarcă fișierul `main.cpp`, apoi rulează în terminal:

```bash
g++ main.cpp -o joc
./joc
