/*
 * C++ Program to Implement Modular Exponentiation Algorithm
 */

#include <iostream>
using namespace std;

int mod (int x, int y, int a)
    {
    if (x == 0)
        return 0;
    if (y == 0)
        return 1;

    // If y is even
    long temp;
    if (y % 2 == 0) {
        temp = mod(x, y / 2, a);
        temp = (temp * temp) % a;
    }

    // If y is odd
    else {
        temp = x % a;
        temp = (temp * mod(x, y - 1, a) % a) % a;
    }

    return (int)((temp + a) % a);

}

/*
 * Main
 */

int main()
{
  int x,y,a;
  cout<<"x^y (mod a)"<<endl;

   cout<<"Enter Base Value: ";
    cin>>x;
    cout<<"Enter Exponent: ";
    cin>>y;
    cout<<"Enter Modular Value: ";
    cin>>a;
    long temp;
    temp= mod(x,y,a);

    cout<<x <<" ^ "<<y <<" (mod "<<a<<")"<<" = "<<temp;
}

