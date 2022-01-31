#include <cstdlib>
#include <iostream>

#include "cnum.h"
#include "cmatrix.h"

using namespace std;

cnum cnum1 = cnum(2, -3);
cnum cnum2 = cnum(0, 0);
cmatrix a2 = cmatrix(cnum2, 4);
cmatrix a3 = cmatrix(cnum2, 4);
cmatrix a4 = cmatrix(cnum2, 4);
cmatrix a5 = cmatrix(cnum2, 4);

int main()
{
    a2.print();
    cout << "-----\n";
    a3.print();
    cout << "-----\n";

    a4.sum(a2, a3);
    cout << "\na1 + a2\n";
    a4.print();

    a5.prod(a2, a3);
    cout << "\na1 * a2\n";
    a5.print();

    return 0;
}
