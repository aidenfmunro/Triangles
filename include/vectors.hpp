#ifndef VECTORS_HPP

#include <cmath>
#include <type_traits>
#include "utils.hpp"

// vec2

template<class T>
class vec2;

template<class T> T Dot(const vec2<T>& lhs, const vec2<T>& rhs);

template<class T> vec2<T> operator+(const vec2<T>& lhs, const vec2<T>& rhs);
template<class T> vec2<T> operator-(const vec2<T>& lhs, const vec2<T>& rhs);
template<class T> vec2<T> operator*(const vec2<T>& lhs, const T& scalar);
template<class T> vec2<T> operator/(const vec2<T>& lhs, const T& scalar);

template<class T> vec2<T> operator+=(vec2<T>& lhs, vec2<T>& rhs);
template<class T> vec2<T> operator-=(vec2<T>& lhs, vec2<T>& rhs);
template<class T> vec2<T> operator*=(vec2<T>& lhs, const T& scalar);
template<class T> vec2<T> operator/=(vec2<T>& lhs, const T& scalar);

template<class T> bool operator==(const vec2<T>& lhs, const vec2<T>& rhs);

template<class T>
class vec2
{
public:
    T x;
    T y;

    vec2(T x = T(), T y = T());
    vec2<T>& operator=(const vec2<T>& other);

    T Len();
    vec2<T> Norm();
};

using vec2i = vec2<int>;
using vec2u = vec2<unsigned int>;
using vec2f = vec2<float>;
using vec2d = vec2<double>;

// vec3

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

using vec3i = vec3<int>;
using vec3u = vec3<unsigned int>;
using vec3f = vec3<float>;
using vec3d = vec3<double>;

#include "../source/vectors.tpp"

#endif // VECTORS_HPP
