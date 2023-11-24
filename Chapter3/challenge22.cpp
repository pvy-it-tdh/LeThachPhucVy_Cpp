#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{
    double angle;
    cout << "Enter an angle in radians: ";
    cin >> angle;
    double sine = sin(angle);
    double cosine = cos(angle);
    double tangent = tan(angle);
    cout << fixed << setprecision(4);
    cout << "Sin: " << sine << endl;
    cout << "Cos: " << cosine << endl;
    if (cosine != 0.0) {
        cout << "Tan: " << tangent << endl;
    } else {
        cout << "Tan khong xac dinh (chia cho 0)." << endl;
    }
    return 0;
}
