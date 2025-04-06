#pragma once

class Point {
private:
    double x, y, z;

public:
    void input();
    void output();

    void setX(double value);
    void setY(double value);
    void setZ(double value);

    double getX();
    double getY();
    double getZ();

    void saveToFile(const char* filename);
    void loadFromFile(const char* filename);
};
