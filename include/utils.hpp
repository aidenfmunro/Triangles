#ifndef UTILS_H
#define UTILS_H

namespace utils
{
    const double TOLERANCE = 1e-6;

    int doubleCompare(double lhs, double rhs);

    template <typename T>
    int sign(T val)
    {
        return (T(0) < val) - (val < T(0));
    }
} // namespace utils



#endif
