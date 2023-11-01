#include<iostream>
#include <cmath>

using namespace std;

class CompelexNumber{
    public:
    float realPart;
    float imgPart;
    CompelexNumber(float x,float y) : realPart(x),imgPart(y) {}
    CompelexNumber(){};
    
    void printNum(){
        cout << realPart<< "+" << imgPart<<'i'<<endl;
    }
    CompelexNumber operator+(const CompelexNumber& other){
        CompelexNumber result;
        result.realPart = realPart + other.realPart;
        result.imgPart = imgPart + other.imgPart; 
        return result;
        }
    CompelexNumber operator-(const CompelexNumber& other){
        CompelexNumber result;
        result.realPart = realPart - other.realPart;
        result.imgPart = imgPart - other.imgPart;
        return result;
        }
    CompelexNumber operator*(const CompelexNumber& other){
        CompelexNumber result;
        result.realPart = realPart * other.realPart - imgPart * other.imgPart;
        result.imgPart = realPart * other.imgPart + imgPart*other.realPart;
        return result;
        }
    CompelexNumber operator/(const CompelexNumber& other){
        CompelexNumber result;
        result.realPart = (realPart * other.realPart + imgPart * other.imgPart)/(pow(other.realPart,2) + pow(other.imgPart,2));
        result.imgPart = (-(realPart * other.imgPart) + imgPart*other.realPart)/(pow(other.realPart,2) + pow(other.imgPart,2));
        return result;
        }
    bool operator==(const CompelexNumber& other){
        if (realPart==other.realPart && imgPart==other.imgPart)
            return true;
        return false;
        }
};

int main(int argc, char const *argv[])
{
    CompelexNumber c1,c2,c3,c0(0,0);
    float a,b;
    int choix;
    cout << "donnez la partie reel de 1er nombre: ";
    cin >> a;
    cout << "donnez la partie imaginaire de 1er nombre: ";
    cin >> b;
    c1 = CompelexNumber(a,b);
    cout << "donnez la partie reel de 2em nombre: ";
    cin >> a;
    cout << "donnez la partie imaginaire de 2em nombre: ";
    cin >> b;
    c2 = CompelexNumber(a,b);
    do
   {     cout << "choisir l'operation: "<<endl;
        cout << "1.addition"<<endl;
        cout << "2.soustraction"<<endl;
        cout << "3.multiplication"<<endl;
        cout << "4.division"<<endl;
        cout << "5.egalite"<<endl;
        cout << "0.exite"<<endl;
        cout << "choix: ";
        cin >> choix;
        cout << endl;
        switch (choix)
        {
        case 5:
            if (c1 == c2){
                cout << "Les deux nombre sont egaux";
            }        
            break;
        case 1:
            c3 = c1+c2;
            cout << "c1 + c2 = ";
            c3.printNum();
            break;
        case 2:
            c3 = c1-c2;
            cout << "c1 - c2 = ";
            c3.printNum();
            break;
        case 3:
            c3 = c1*c2;
            cout << "c1 * c2 = ";
            c3.printNum();
            break;
        case 4:
            if (c2 == c0){
                cout << "can't devied by 0";
                break;
            }
            c3 = c1/c2;
            cout << "c1 / c2 = ";
            c3.printNum();
            break;
        case 0:
            exit(0);
        default:
            cout<< "invalid choix.";
            break;
        }}while(1);
    return 0;
}
