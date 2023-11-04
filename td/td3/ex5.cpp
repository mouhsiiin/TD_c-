#include <iostream>
using namespace std;
class Test
{
public:
    static int tableau[];
    static float division(int indice, float diviseur)
    {
        return tableau[indice] / diviseur;
    }
};

int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};

int main()
{
    int x, y;
    cout << "Entrez l'indice de l'entier a diviser: " ;
    cin >> x;
    cout << "Entrez le diviseur: " ;
    cin >> y;
    cout << "Le resultat de la division est: " << endl;
    try{

        cout << Test::division(x, y) << endl;
    }
    catch (exception){
        
        cout << "division par zero "<< endl;
        exit(-2);
    }
    return 0;
}