#include <iostream>

using namespace std;

int isPair(int x){
    return (x % 2 == 0)? 1: 0;
}
int isMultipleOf_3(int x){
   return (x%3 == 0) ?  1:  0;
}

main(){
    int num;
    cout << "donnez un entier :";
    cin >> num;
    if (isPair(num)){
        cout << "il est pair"<<endl;
    }
    if (isMultipleOf_3(num)){
        cout << "il est multiple de 3"<< endl;
    }
    if (isPair(num)&&isMultipleOf_3(num)){
        cout << "il est divisible par 6"<<endl;
    }
    
}