#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    int tab[10];
    for (int i = 0; i < 10; i++){
        cout<<"donnez un entier: ";
        cin>> tab[i];
    }
    cout << "le tableau avant le tri: "<<endl;
    for(int x : tab)cout << x<<" ";
    int temp;
    int counter=0;
    do{   //sorting....
        counter = 0;
        for (int i = 0; i < 9; i++)
        {
            if (tab[i]>tab[i+1]){
                temp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = temp;
                counter++;
            }
        }
    }while(counter != 0);
    cout << "\nle tableau apre le tri: "<< endl;
    for(int x : tab)cout << x<<" ";
    return 0;
}
