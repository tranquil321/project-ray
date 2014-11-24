// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stack>
#include <vector>
#include <iostream>
#include "PositionComponent.h"

int main (int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stdout,"Usage: %s number\n",argv[0]);
        return 1;
    }
    double inputValue = atof(argv[1]);
    double outputValue = sqrt(inputValue);
    fprintf(stdout,"The square root of %g is %g\n",
            inputValue, outputValue);


    std::vector<PositionComponent> positionComponents;

    positionComponents.push_back(PositionComponent(1.0, 2.0));

    for( PositionComponent i : positionComponents){
        std::cout << i << endl;
    }

    return 0;
}