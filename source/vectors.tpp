template<class T>
vec2<T>::vec2(T _x, T _y)
    : x(_x),
      y(_y) {}

template<class T>
T vec2<T>::Len()
{
    return std::sqrt(x * x + y * y);
}

template<class T>
T Dot(const vec2<T>& lhs, const vec2<T>& rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y;
}

template<class T>
vec2<T> vec2<T>::Norm()
{
    return *this / Len();
}

template<class T>
vec2<T> operator+(const vec2<T>& lhs, const vec2<T>& rhs)
{
    return vec2<T>(lhs.x + rhs.x, lhs.y + rhs.y);
}

template<class T>
vec2<T> operator-(const vec2<T>& lhs, const vec2<T>& rhs)
{
    return vec2<T>(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z);
}

template<class T>
vec2<T> operator*(const vec2<T>& lhs, const T& scalar)
{
    return vec2<T>(lhs.x * scalar, lhs.y * scalar);
}


template<class T>
vec2<T> operator/(const vec2<T>& lhs, const T& scalar)
{
    return vec2<T>(lhs.x / scalar, lhs.y / scalar);
}


template<class T>
vec2<T> operator+=(vec2<T>& lhs, vec2<T>& rhs)
{
    lhs.x += rhs.x;
    lhs.y += rhs.y;

    return lhs;
}

template<class T>
vec2<T> operator-=(vec2<T>& lhs, vec2<T>& rhs)
{
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;

    return lhs;
}


template<class T>
vec2<T> operator*=(vec2<T>& lhs, const T& scalar)
{
    lhs.x *= scalar;
    lhs.y *= scalar;

    return lhs;
}

template<class T>
vec2<T> operator/=(vec2<T>& lhs, const T& scalar)
{
    lhs.x /= scalar;
    lhs.y /= scalar;

    return lhs;
}

template<class T>
bool operator==(const vec2<T>& lhs, const vec2<T>& rhs)
{
    if (std::is_floating_point_v<T>)
    {
        return utils::doubleCompare(lhs.x, rhs.x)
            && utils::doubleCompare(lhs.y, rhs.y);
    }
    else
    {
        return lhs.x == rhs.x
            && lhs.y == rhs.y;
    }
}

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
    return *this / Len();
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
    return vec3<T>(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z);
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
vec3<T> operator+=(vec3<T>& lhs, vec3<T>& rhs)
{
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    lhs.z += rhs.z;

    return lhs;
}

template<class T>
vec3<T> operator-=(vec3<T>& lhs, vec3<T>& rhs)
{
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;
    lhs.z -= rhs.z;

    return lhs;
}


template<class T>
vec3<T> operator*=(vec3<T>& lhs, const T& scalar)
{
    lhs.x *= scalar;
    lhs.y *= scalar;
    lhs.z *= scalar;

    return lhs;
}

template<class T>
vec3<T> operator/=(vec3<T>& lhs, const T& scalar)
{
    lhs.x /= scalar;
    lhs.y /= scalar;
    lhs.z /= scalar;

    return lhs;
}

template<class T>
bool operator==(const vec3<T>& lhs, const vec3<T>& rhs)
{
    if (std::is_floating_point_v<T>)
    {
        return utils::doubleCompare(lhs.x, rhs.x)
            && utils::doubleCompare(lhs.y, rhs.y)
            && utils::doubleCompare(lhs.z, rhs.z);
    }
    else
    {
        return lhs.x == rhs.x
            && lhs.y == rhs.y
            && lhs.z == rhs.z;
    }
}

