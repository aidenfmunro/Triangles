#ifndef VECTORS_HPP

#include <cmath>
#include <type_traits>
#include "utils.hpp"

template<class T>
class vec3;

template<class T> T Dot(const vec3<T>& lhs, const vec3<T>& rhs);
template<class T> vec3<T> Cross(const vec3<T>& lhs, const vec3<T>& rhs);

template<class T> vec3<T> operator+(const vec3<T>& lhs, const vec3<T>& rhs);
template<class T> vec3<T> operator-(const vec3<T>& lhs, const vec3<T>& rhs);
template<class T> vec3<T> operator*(const vec3<T>& lhs, const T& scalar);
template<class T> vec3<T> operator/(const vec3<T>& lhs, const T& scalar);

template<class T> vec3<T> operator+=(vec3<T>& lhs, vec3<T>& rhs);
template<class T> vec3<T> operator-=(vec3<T>& lhs, vec3<T>& rhs);
template<class T> vec3<T> operator*=(vec3<T>& lhs, const T& scalar);
template<class T> vec3<T> operator/=(vec3<T>& lhs, const T& scalar);

template<class T> bool operator==(const vec3<T>& lhs, const vec3<T>& rhs);

template<class T>
class vec3
{
public:
    union { T x, r; };
    union { T y, g; };
    union { T z, b; };

    vec3(T x = T(), T y = T(), T z = T());
    vec3<T>& operator=(const vec3<T>& other);

    T Len();
    vec3<T> Norm();
};

#include "../source/vectors.tpp"

#endif // VECTORS_HPP
