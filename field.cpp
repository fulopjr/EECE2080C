#include <iostream>

using namespace std;

const double Q = .000000001;
const double K = 9000000000;
double Efield(double r, double a = 1)
{
    double field;
    if(r < a)
    {
        field = (K*Q)*(r/(a*a*a));
    }
    else {
        field = (K*Q)/(r*r);
    }
    return field;
}
int main()
{
    double r;
    double a;

    cin >> r;
    cin >> a;

    cout << "Efield: " << Efield(r,a);

}
