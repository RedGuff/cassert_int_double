#include <iostream>
#include <cassert>
using namespace std;

int main() {
    int numerateur = 9;
    int denominateur = 2;
    assert ( ( denominateur != 0.0 ) && "Erreur de codage :  !" );
    double quotientI = numerateur / denominateur;
    cout << numerateur << "/" << denominateur << " = " <<quotientI << endl; // Pourtant "double", sur la ligne d'avant !
    double quotientD = double ( numerateur ) / double ( denominateur );
    cout << numerateur << "/" << denominateur << " = " << quotientD << endl;
    return 0;
    }
