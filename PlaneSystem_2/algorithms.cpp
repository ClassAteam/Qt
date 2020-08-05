#include "algorithms.h"
#include "math.h"

// get Y value of point on linear function between two points(x1,y1 ; x2,y2)
double two_points_to_Y(double insert, double x1, double x2, double y1, double y2)
{
    double Y;
    Y = (((insert - x1) / (x2 - x1)) * (y2 - y1)) + y1;
    return Y;
}
// get presure from altitude
double presure_from_altitude(double altitude)
{
    double result;
    result = 1.0 * (pow ((1 -((6.5 * altitude) / 288)), 4.255));
    return result;

}
