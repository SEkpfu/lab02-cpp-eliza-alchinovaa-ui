//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    setlocale(0, "");
//    int n;
//    string ending;
//    cout << "Введите количество грибов: " << endl;
//    cin >> n;
//
//    if (n % 100 >= 11 && n % 100 <= 19) ending = "ов";
//    else switch (n % 10) {
//    case 1: ending = ""; break;
//    case 2:
//    case 3:
//    case 4: ending = "а"; break;
//    default: ending = "ов"; break;
//    }
//    cout << "Джонни собрал " << n << " гриб" << ending << endl;
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
    cout << "Введите значение х: " << endl; cin >> x;

    if (x >= -2.5 && x <= 2.5) {
        cout << "r = " << (5.0 / 2.0) * x * x * x * x;
    }
    else if (x > 2.5) {
        cout << "r = " << sqrt(2.0 * x + 1.0);
    }
    else {
        double denominator = x - 3.0;
        if (abs(denominator) < numeric_limits<double>::epsilon()) {
            cout << "Ошибка: деление на ноль";
        }
        else {
            cout << "r = " << (sin(M_PI * abs(x))) / denominator;
        }
    }
    return 0;
}