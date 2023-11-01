#include <iostream>

using namespace std;

void a(){//array way
    int tab[10];
    for (int i = 0; i < 10; i++){
        cout<<"donnez un entier: ";
        cin>> tab[i];
    }
    int temp;
    for (int i = 0; i < 10; i++)    //sort tab[]
    {
        for (int j = i; j < 10; j++)
        {
            if (tab[i]<tab[j]){
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
        
    }
    cout << "le plus grand num est: "<<tab[0];
    cout << "\nle plus petit num est: "<<tab[9];
    
}

void b(){//pointers way
    int* tab = new int[10];
    for (int* p = tab; p < tab+10; p++){
        cout<<"donnez un entier: ";
        cin>> *p;
    }
    int min = *tab;
    int max = *tab;
    for (int* p = tab+1; p < tab+10; p++){  //find min and max
        min = min > *p? *p : min;
        max = max < *p? *p: max;
    }
    cout << "le plus grand num est: "<<max;
    cout << "\nle plus petit num est: "<<min;
    delete[] tab;

}

int main(int argc, char const *argv[])
{
    char x;
    cout << " a or b: ";
    cin >> x;
    if(x=='a')a();
    if (x=='b')b();
    return 0;
}

