#include <iostream>
using namespace std;

int main()
{
    int input;
    double tempNotes;
    cout << "Nombre de note" << endl;
    cin >> input;
    int const nombreNotes(input);
    double notes[nombreNotes];
    for (int i(0); i < nombreNotes; i+=1)
    {
        cout << "Note" << i+1 << ": " << endl;
        cin >> tempNotes;
        notes[i] = tempNotes;
    }
    double moyenne(0);
    for(int i(0); i<nombreNotes; ++i)
    {
        moyenne += notes[i];   //On additionne toutes les notes
    }
    moyenne /= nombreNotes;
    if (moyenne < 10)
    {
        cout << "Moyenne nul ! Cheh, retourne en 6eme NOOB, ta moyenne pas ouf :" << moyenne <<endl;
    }
    else
    {
        cout << "Votre moyenne est de :" << moyenne << endl;
    }
   return 0;
}