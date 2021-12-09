#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int input;
    double tempNotes;
    cout << "Programme de moyenne, Dev ++, vector system." << endl;
    cout << "Nombre de notes :" << endl;
    cin >> input;
    int const nombreNotes(input);
    vector<double> notes;
    for (int i(0); i < nombreNotes; i+=1)
    {
        cout << "Note " << i+1 << ": " << endl;
        cin >> tempNotes;
        notes.push_back(tempNotes);
    }
    double moyenne;
    for(int i(0); i<nombreNotes; ++i)
    {
        moyenne += notes[i];   //On additionne toutes les notes
    }
    moyenne /= nombreNotes;
    if (moyenne < 10)
    {
        cout << "Moyenne nul ! Cheh, retourne en 6eme NOOB, ta moyenne pas ouf : " << moyenne <<endl;
    }
    else
    {
        cout << "Votre moyenne est de :" << moyenne << endl;
    }
   return 0;
}