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
    altitude = (altitude / 1000);
    result = 101.3 * (pow ((1 -((6.5 * altitude) / 288)), 5.255));
    result = (result / 100);

    return result;

}
