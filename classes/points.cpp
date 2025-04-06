#define _CRT_SECURE_NO_WARNINGS
#include "points.h"
#include <iostream>
#include <cstdio>
using namespace std;

void Point::input() {
    cout << "Enter x: "; cin >> x;
    cout << "Enter y: "; cin >> y;
    cout << "Enter z: "; cin >> z;
}

void Point::output() {
    cout << "Point coordinates: (" << x << ", " << y << ", " << z << ")" << endl;
}

void Point::setX(double value) { x = value; }
void Point::setY(double value) { y = value; }
void Point::setZ(double value) { z = value; }

double Point::getX() { return x; }
double Point::getY() { return y; }
double Point::getZ() { return z; }

void Point::saveToFile(const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file) {
        fprintf(file, "%lf %lf %lf\n", x, y, z);
        fclose(file);
        cout << "Point saved to file." << endl;
    }
    else {
        cout << "Error opening file for writing!" << endl;
    }
}

void Point::loadFromFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file) {
        fscanf(file, "%lf %lf %lf", &x, &y, &z);
        fclose(file);
        cout << "Point loaded from file." << endl;
    }
    else {
        cout << "Error opening file for reading!" << endl;
    }
}