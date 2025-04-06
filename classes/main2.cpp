
#include "points.h"
#include <iostream>
using namespace std;

int main() {
    Point p;
    p.input();
    p.output();

    p.saveToFile("points.txt");

    Point loadedPoint;
    loadedPoint.loadFromFile("points.txt");
    loadedPoint.output();

    return 0;
}