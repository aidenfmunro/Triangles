template<class T>
vec3<T>::vec3(T _x, T _y, T _z)
    : x(_x),
      y(_y),
      z(_z) {}

template<class T>
T vec3<T>::Len()
{
    return std::sqrt(x * x + y * y + z * z);
}

template<class T>
T Dot(const vec3<T>& lhs, const vec3<T>& rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
}

template<class T>
vec3<T> vec3<T>::Norm()
{
    return *this / Len(*this);
}

template<class T>
vec3<T> Cross(const vec3<T>& lhs, const vec3<T>& rhs)
{
    return vec3<T>(lhs.y * rhs.z - lhs.z * rhs.y,
                   lhs.z * rhs.x - lhs.x * rhs.z,
                   lhs.x * rhs.y - lhs.y * rhs.x);
}


template<class T>
vec3<T> operator+(const vec3<T>& lhs, const vec3<T>& rhs)
{
    return vec3<T>(lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z);
}


template<class T>
vec3<T> operator-(const vec3<T>& lhs, const vec3<T>& rhs)
{
    return vec3<T>(lhs.x - rhs.x, lhs.x - rhs.y, lhs.z - rhs.z);
}

template<class T>
vec3<T> operator*(const vec3<T>& lhs, const T& scalar)
{
    return vec3<T>(lhs.x * scalar, lhs.y * scalar, lhs.z * scalar);
}


template<class T>
vec3<T> operator/(const vec3<T>& lhs, const T& scalar)
{
    return vec3<T>(lhs.x / scalar, lhs.y / scalar, lhs.z / scalar);
}


template<class T>
vec3<T> operator+=(const vec3<T>& lhs, const vec3<T>& rhs)
{
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    lhs.z += rhs.z;

    return lhs;
}

template<class T>
vec3<T> operator-=(const vec3<T>& lhs, const vec3<T>& rhs)
{
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;
    lhs.z -= rhs.z;

    return lhs;
}


template<class T>
vec3<T> operator*=(const vec3<T>& lhs, const T& scalar)
{
    lhs.x *= scalar;
    lhs.y *= scalar;
    lhs.z *= scalar;

    return lhs;
}

template<class T>
vec3<T> operator/=(const vec3<T>& lhs, const T& scalar)
{
    lhs.x /= scalar;
    lhs.y /= scalar;
    lhs.z /= scalar;

    return lhs;
}
