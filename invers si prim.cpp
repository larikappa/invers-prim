#include <iostream>
using namespace std;

int main()
{
    // etapa 1 verificam daca a e prim
    int a, i = 2, este_prim = 1;
    cin >> a;
    while (i < a)
    { // Parcurgem numerele de la 2 la a-1
        if (a % i == 0) { // Daca a se divide la i
        este_prim = 0; // Atunci a nu este prim
    }
        ++i;
    }
        if (a == 1) {
        este_prim = 0;
        }
    if (este_prim == 0)  {
    cout << "NU";
    }
  // etapa 2 calculam inversul lui a daca a e prim
    if (este_prim == 1) {
        int r, rev = 0;
    while (a != 0) {
        r = a % 10;
        rev = rev * 10 + r;
        a /= 10;
    }
    }
    // etapa 3 verificam daca inversul lui a e prim si el
    int j = 2, rev, prim_rev =1;
    while (j < rev) {
        if (rev % j == 0) {
            prim_rev = 0;
        }
    ++j;
        }
        if (rev == 1) {
        prim_rev = 0;
        }
    // etapa 4 afisarea rezultatului
    if (prim_rev == 1 && este_prim == 1) {
        cout << "DA";
    }
    if (prim_rev == 0 && este_prim == 0) {
        cout << "NU";
    }
    return 0;
}
