#include <iostream>

using namespace std;

void increment(int *a){
    (*a)++;
}
void permut(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int a,b;
    cout << "donnez un entier: ";
    cin >> a;
    increment(&a);
    cout << a;

    cout << "\ndonnez le 1er entier (a): ";
    cin >> a;
    cout << "donnez le 2eme entier (b): ";
    cin >> b;
    permut(&a,&b);
    cout << "a: "<< a <<"\nb: "<< b;

    return 0;
}
