#include "PositionComponent.h"
#include <iostream>
#include <ostream>

using namespace std;

PositionComponent::PositionComponent() {
    setX(0);
    setY(0);
};

PositionComponent::PositionComponent(double startX, double startY) {
    setX(startX);
    setY(startY);
};

std::ostream& operator<<(ostream &strm, PositionComponent &comp) {
    return strm << "PositionComponent: (" << comp.getX() << ", " << comp.getY() << ")";
};