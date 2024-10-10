#include "vectors.hpp"
#include "utils.hpp"
#include "gtest/gtest.h"

TEST(Vec2Test, CalculateLength)
{
    vec2<double> vec(1, 2);

    ASSERT_TRUE(utils::doubleCompare(vec.Len(), std::sqrt(1 * 1 + 2 * 2)));
}

TEST(Vec2Test, CalculateDotProduct)
{
    vec2<double> vec1(1, 2),
                 vec2(3, 2);

    ASSERT_TRUE(utils::doubleCompare(Dot(vec1, vec2), 7));
}

TEST(Vec2Test, CheckNormCorrectness)
{
    vec2<double> vec(1, 1);

    ASSERT_TRUE(vec.Norm() == vec2<double>(std::sqrt(0.5), std::sqrt(0.5)));
}

TEST(Vec2Test, CheckAdditionOperatorCorrectness)
{
    vec3<double> vec1(1, 2),
                 vec2(1, 2),
                 vecRes(2, 4);

    ASSERT_TRUE(vec1 + vec2 == vecRes);
}

TEST(Vec2Test, CheckSubstractionOperatorCorrectness)
{
    vec3<double> vec1(1, 2),
                 vec2(1, 2),
                 vecRes(0, 0);

    ASSERT_TRUE(vec1 - vec2 == vecRes);
}

TEST(Vec2Test, CheckMultiplicationOperatorCorrectness)
{
    vec3<double> vec1(1, 2);
    double scalar = 3;

    vec3<double> vecRes(3, 6);

    ASSERT_TRUE(vec1 * scalar == vecRes);
}

TEST(Vec2Test, CheckDivisionOperatorCorrectness)
{
    vec3<double> vec1(3, 6);
    double scalar = 3;

    vec3<double> vecRes(1, 2);

    ASSERT_TRUE(vec1 / scalar == vecRes);
}

TEST(Vec2Test, CheckAdditionAssignmentOperatorCorrectness)
{
    vec3<double> vec1(1, 2),
                 vec2(1, 2),
                 vecRes(2, 4);

    ASSERT_TRUE((vec1 += vec2) == vecRes);
}


TEST(Vec2Test, CheckSubstractionAssignmentOperatorCorrectness)
{
    vec3<double> vec1(1, 2),
                 vec2(1, 2),
                 vecRes(0, 0);

    ASSERT_TRUE((vec1 -= vec2) == vecRes);
}

TEST(Vec2Test, CheckMultiplicationAssignmentOperatorCorrectness)
{
    vec3<double> vec1(1, 2);
    double scalar = 3;

    vec3<double> vecRes(3, 6);

    ASSERT_TRUE((vec1 *= scalar) == vecRes);
}

TEST(Vec2Test, CheckDivisionAssignmentOperatorCorrectness)
{
    vec3<double> vec1(3, 6);
    double scalar = 3;

    vec3<double> vecRes(1, 2);

    ASSERT_TRUE((vec1 /= scalar) == vecRes);
}

TEST(Vec3Test, CalculateLength)
{
    vec3<double> vec(1, 2, 3);

    ASSERT_TRUE(utils::doubleCompare(vec.Len(), std::sqrt(1 * 1 + 2 * 2 + 3 * 3)));
}

TEST(Vec3Test, CalculateDotProduct)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(3, 2, 1);

    ASSERT_TRUE(utils::doubleCompare(Dot(vec1, vec2), 10));
}

TEST(Vec3Test, CalculateCrossProduct)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(1, 2, 3),
                 vecRes(0, 0, 0);

    ASSERT_TRUE(Cross(vec1, vec2) == vecRes);
}

TEST(Vec3Test, CheckNormCorrectness)
{
    vec3<double> vec(1, 1, 2);

    ASSERT_TRUE(vec.Norm() == vec3<double>(1 / std::sqrt(6), 1 / std::sqrt(6), 2 / std::sqrt(6)));
}

TEST(Vec3Test, CheckAdditionOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(1, 2, 3),
                 vecRes(2, 4, 6);

    ASSERT_TRUE(vec1 + vec2 == vecRes);
}


TEST(Vec3Test, CheckSubstractionOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(1, 2, 3),
                 vecRes(0, 0, 0);

    ASSERT_TRUE(vec1 - vec2 == vecRes);
}

TEST(Vec3Test, CheckMultiplicationOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3);
    double scalar = 3;

    vec3<double> vecRes(3, 6, 9);

    ASSERT_TRUE(vec1 * scalar == vecRes);
}

TEST(Vec3Test, CheckDivisionOperatorCorrectness)
{
    vec3<double> vec1(3, 6, 9);
    double scalar = 3;

    vec3<double> vecRes(1, 2, 3);

    ASSERT_TRUE(vec1 / scalar == vecRes);
}

TEST(Vec3Test, CheckAdditionAssignmentOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(1, 2, 3),
                 vecRes(2, 4, 6);

    ASSERT_TRUE((vec1 += vec2) == vecRes);
}


TEST(Vec3Test, CheckSubstractionAssignmentOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(1, 2, 3),
                 vecRes(0, 0, 0);

    ASSERT_TRUE((vec1 -= vec2) == vecRes);
}

TEST(Vec3Test, CheckMultiplicationAssignmentOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3);
    double scalar = 3;

    vec3<double> vecRes(3, 6, 9);

    ASSERT_TRUE((vec1 *= scalar) == vecRes);
}

TEST(Vec3Test, CheckDivisionAssignmentOperatorCorrectness)
{
    vec3<double> vec1(3, 6, 9);
    double scalar = 3;

    vec3<double> vecRes(1, 2, 3);

    ASSERT_TRUE((vec1 /= scalar) == vecRes);
}






