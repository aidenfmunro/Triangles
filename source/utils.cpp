#include <cmath>
#include "utils.hpp"

int utils::doubleCompare(double lhs, double rhs)
{
    return fabs(lhs - rhs) <  TOLERANCE;
}

