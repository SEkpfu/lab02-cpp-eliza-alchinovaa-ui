//#include <iostream>
//#include <cmath>    
//
//using namespace std;
//
//int main() {
//    setlocale(0, "");
//    
//    double r, a, b, z, c;
//
//    cout << "Введите радиус торта r: ";
//    cin >> r;
//    cout << "Введите высоту торта z: ";
//    cin >> z;
//    cout << "Введите стороны коробки a и b: ";
//    cin >> a >> b;
//    cout << "Введите высоту коробки c: ";
//    cin >> c;
//
//    if (2*r <= a && 2*r <= b && z <= c) cout << "Торт уместится в коробку!";
//    
//    else cout << "Торт не уместится в коробку!";
//    return 0;
//}



//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    
//    setlocale(0, "");
//    
//    double x, y, z, a, b;
//    cout << "Введите длину кирпича: "; cin >> x;
//    cout << "Введите ширину кирпича: "; cin >> y;
//    cout << "Введите высоту кирпича: "; cin >> z;
//    cout << "Введите размеры прямоугольника:\na = "; cin >> a; cout << "b = "; cin >> b;
//    
//    if ((x <= a && y <= b) || (y <= a && x <= b)) cout << "Кирпич сможет пройти через прямоугольник";
//    
//    else if ((y <= a && z <= b) || (z <= a && y <= b)) cout << "Кирпич сможет пройти через прямоугольник";
//    
//    else if ((x <= a && z <= b) || (z <= a && x <= b)) cout << "Кирпич сможет пройти через прямоугольник";
//    
//    else cout << "Кирпич НЕ сможет пройти через прямоугольник!";
//    
//    return 0;
//}