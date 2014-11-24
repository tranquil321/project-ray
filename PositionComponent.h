#include <ostream>
#include <iostream>

using namespace std;


class PositionComponent {

private:
    double x_pos = 0;
    double y_pos = 0;
public:
    PositionComponent();
    PositionComponent(double startX, double startY);
    friend std::ostream& operator<<(std::ostream&, PositionComponent&);

    double getX(){
        return x_pos;
    }
    double getY(){
        return y_pos;
    }

    void setX(double x) {
        this->x_pos = x;
    }
    void setY(double y) {
        this->y_pos = y;
    }
};