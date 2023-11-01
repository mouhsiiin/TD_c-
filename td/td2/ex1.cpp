#include <iostream>

int counter = 0;

void count(){
    counter++;
    std::cout<< "Appel numero: "<<counter;
}
int main(int argc, char const *argv[])
{
    char choice='c';
    while (choice == 'c'|| choice == 'C'){
        std::cout << "\npress c to call: ";
        std::cin >> choice;
        count();
    }
    return 0;
}
