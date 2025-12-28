#include <iostream>
using namespace std;
int main(void) {
    setlocale(LC_ALL, "RU");
    int a,b,c;
    cout << "Введите коэффиценты (a, b, c): " << endl;
    cin >> a >> b >> c;
    float xVertex = (- b) / (2.0 * a);
    float yVertex = a * (xVertex *xVertex) + (b * xVertex) + c;
    cout << "Координаты вершины параболы (x: " << xVertex << ", y: " << yVertex << " )" << endl;
    return 0;
}

