#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    double a, a1, b, b1, c, c1;
    double rs1, rs2, rs3;
    double p = 0;

    cin >> a >> a1 >> b >> b1 >> c >> c1;

    rs1 = sqrt(pow((b - a), 2) + pow((b1 - a1), 2));
    rs2 = sqrt(pow((c - b), 2) + pow((c1 - b1), 2));
    rs3 = sqrt(pow((c - a), 2) + pow((c1 - a1), 2));

    p = (rs1 + rs2 + rs3) / 2;

    cout << "P:" << rs1 + rs2 + rs3 << endl;
    cout << "S:" << sqrt(p * (p - rs1) * p * (p - rs2) * p * (p - rs3));
}

