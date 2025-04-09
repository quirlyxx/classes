class Point {
private:
    double x, y, z;

public:
    Point();
    Point(double x, double y, double z);

    void input();
    void output();

    inline void setX(double value) {
        x = value;
    }
    inline void setY(double value) {
        y = value;
    }
    inline void setZ(double value) {
        z = value; 
    }

    inline double getX() {
        return x; 
    }
    inline double getY() {
        return y; 
    }
    inline double getZ() { 
        return z; 
    }

    void saveToFile(const char* filename);
    void loadFromFile(const char* filename);
};
