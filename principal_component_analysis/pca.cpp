//
// Created by Sumuk Shashidhar on 2/6/23.
//

#include "pca.h"

Point pca::getMeanPoint(vector<Point> &points) {
    /*
     * Returns the mean point of the given data vector.
     * */
    Point meanPoint(0, 0);
    // iterate through the points and add the x and y coordinates
    for (auto &point : points) {
        meanPoint.x += point.x;
        meanPoint.y += point.y;
    }
    // divide the sum by the number of points to get the mean
    meanPoint.x /= points.size();
    meanPoint.y /= points.size();
    return meanPoint;
}


