//
// Created by Sumuk Shashidhar on 2/6/23.
//

#ifndef MACHINE_LEARNING_ALGORITHMS_IN_CPP_PCA_H
#define MACHINE_LEARNING_ALGORITHMS_IN_CPP_PCA_H

#include <vector>

using std::vector;

struct Point {
    // Point class to store the data points
    double x;
    double y;
    Point(double x, double y) {
        // Constructor to initialize the point
        this->x = x;
        this->y = y;
    }
};

class pca {

    static Point getMeanPoint(vector <Point> &points);
};


#endif //MACHINE_LEARNING_ALGORITHMS_IN_CPP_PCA_H
