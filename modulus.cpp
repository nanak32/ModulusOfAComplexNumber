#include <iostream>
#include <cmath>

using namespace std;

int main (){
    cout << "Program to Compute the Modulus of a Complex Number" << endl;

    float realPart;
    cout << "Input the Real part: ";
    cin >> realPart;

    float imaginaryPart;
    cout << "Input the Imaginary part: ";
    cin >> imaginaryPart;

    float mod;
    mod = sqrt((realPart * realPart) + (imaginaryPart * imaginaryPart));

    cout << "The answer is: " << mod <<endl;
    return 0;
}
