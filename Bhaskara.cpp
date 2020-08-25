#include <iostream>
#include <math.h>

using namespace std;

int bhaskara();

int main()
{
    bhaskara();
    return 0;
}

int bhaskara()
{
    int n1, n2, n3, delta, x1, x2;

    cout << "Enter the value of A: ";
    cin >> n1;

    cout << "Enter the value of B: ";
    cin >> n2;

    cout << "Enter the value of C: ";
    cin >> n3;


    delta = pow(n2, 2) - ( 4 * n1 * n3);

    if ( delta < 0)
    {
        cout << "the equation has no real roots";
    } else if (delta == 0) {
        cout << "the equation has one real roots";
    } else {
        
        x1 = ( -n2 + (sqrt(delta))) / ( 2 * n1 ); 
        x2 = ( -n2 - (sqrt(delta))) / ( 2 * n1 ); 

        cout << "X1 = " << x1 << "\n";
        cout << "X2 = " << x2 << "\n";

    }
        
}