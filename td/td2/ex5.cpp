#include <iostream>

using namespace std;

main(){
    int a;
    int &ref_a = a;
    int *p_a = &a;
    cout<< "a: "<<a <<"\nref_a:"<<ref_a<<"\np_a: "<<p_a<<endl;
}