#include <iostream>
using namespace std;

void direBonjour()
{
    cout << "Bonjour !" << endl;
    //Comme rien ne ressort, il n'y a pas de return !
}

int main()
{
    direBonjour();
    //Comme la fonction ne renvoie rien
    //On l'appelle sans mettre la valeur de retour dans une variable
    
    return 0;
}