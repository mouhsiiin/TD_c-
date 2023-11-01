 #include <iostream>
 #include <cmath>

using namespace std;

main(){
    int size;
    cout << "donnez la taille du tableau: ";
    cin >> size;
    int* tab1 = new int[size];
    for (int i=0 ; i<size ;i++){
        cout << "donnez un nombre entier: ";
        cin >> tab1[i];
    }
    int* tab2 = new int[size];
    for (int i=0 ; i<size ;i++)tab2[i] = pow(tab1[i],2);
    delete[] tab1;
    for (int i=0 ;i<size; i++)cout << " "<< tab2[i];
    cout << endl;
    delete[] tab2;
}
