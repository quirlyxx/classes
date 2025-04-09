#include "points.h"
#include <iostream>
using namespace std;

int main() {
    Point p;
    p.input();
    p.output();

    p.saveToFile("points.txt");

    Point Point1;
    Point1.loadFromFile("points.txt");
    Point1.output();

    Point p2(1.2, 3.4, 5.6);
    cout << "Created point with parameters: ";
    p2.output();

    return 0;
}
