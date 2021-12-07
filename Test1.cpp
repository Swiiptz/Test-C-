#include <iostream> //charge la fonctionnalité bibliothèque

using namespace std;

int main()
{
    int nbEnfants(-1);
    while (nbEnfants < 0)
    {
        cout << "Vous n'avez pas d'enfant" << endl;
        cin >> nbEnfants;
    }
    cout << "Oh vous avez des enfants" << endl;
}
