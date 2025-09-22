//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    setlocale(0, "");
//    int n;
//    string ending;
//    cout << "������� ���������� ������: " << endl;
//    cin >> n;
//
//    if (n % 100 >= 11 && n % 100 <= 19) ending = "��";
//    else switch (n % 10) {
//    case 1: ending = ""; break;
//    case 2:
//    case 3:
//    case 4: ending = "�"; break;
//    default: ending = "��"; break;
//    }
//    cout << "������ ������ " << n << " ����" << ending << endl;
//    return 0;
//}


#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    setlocale(0, "");
    double x;
    cout << "������� �������� �: " << endl; cin >> x;

    if (x >= -2.5 && x <= 2.5) {
        cout << "r = " << (5.0 / 2.0) * x * x * x * x;
    }
    else if (x > 2.5) {
        cout << "r = " << sqrt(2.0 * x + 1.0);
    }
    else {
        double denominator = x - 3.0;
        if (abs(denominator) < numeric_limits<double>::epsilon()) {
            cout << "������: ������� �� ����";
        }
        else {
            cout << "r = " << (sin(M_PI * abs(x))) / denominator;
        }
    }
    return 0;
}