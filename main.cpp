#include <iostream>

using namespace std;

int main()
{

    char op;
    string numbers[3];
    cout << "Enter 3 names : ";
    for (int n=0; n < 3; ++n){
        cin >> numbers[n];
    }
    cout << "Your Entered Names are : ";
    for(int n =0; n < 3; ++n){
            cout << numbers[n] << " ";
    }

    return 0;
}
