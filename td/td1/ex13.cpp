#include <iostream>

using namespace std;
int throwDice();
int main(int argc, char const *argv[])
{
    cout << throwDice();
    return 0;
}

int throwDice(){//gen a random num 1~6
    srand(time(NULL)); 
    return rand() % 6+1;
}
