// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<exception>
float myDivide(float num, float denum) {
    return num / denum;

}
using namespace std;
int main()
{
    int dbz_err = 0;
    int num_z_err = 1;
    float numm;
    float denumm;
    try {
        cout << "Welcome! This is my divider. It takes in two different numbers\n"
            "and divides them" << endl;
        cout << "Please enter a number for the numerator." << endl;
        cin >> numm;
        if (numm == 0) {
            throw num_z_err;
        }
        cout << "Please enter a number for the denominator." << endl;
        cin >> denumm;
    }
    catch (int e) {
        cout << "Numerator is zero! The answer will always be zero\n";
    }
   
    try {
        if (denumm == 0) {
            throw dbz_err;
        }
    }
        catch (int myE) {
            
            if (myE == dbz_err) {
                cout << "User tried to divide by zero, that will cast too small of a value. " << endl;
                denumm = 0.00000001;

            }
            
        }
    
    cout << "your answer is " << myDivide(numm, denumm);
}


