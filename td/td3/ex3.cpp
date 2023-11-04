#include <iostream>
#include <list>

using namespace std;

class Personne{
    public:
    string nom;
    string prenom;
    int age;
};
int main(int argc, char const *argv[])
{
    int size;
    list<Personne> Mylist;
    cout << "combien des personnes tu vas entre: ";
    cin >> size;
    for (int i=0 ; i<size; i++){
        Personne newpersonne;
        cout << "donnez le nom personne: ";
        cin >> newpersonne.nom;
        cout << "donnez le prenom personne: ";
        cin >> newpersonne.prenom;
        cout << "donnez l'age personne: ";
        cin >> newpersonne.age;
        Mylist.push_back(newpersonne);
    }
    Mylist.sort([](Personne per1,Personne per2)
        {
            if (per1.nom<per2.nom)
                return 1;
            return 0;
        });

    for (const Personne &personne : Mylist){
        cout << personne.nom << "  ";
        cout << personne.prenom << endl;
    }
    return 0;
}
