#include "vectors.hpp"
#include "utils.hpp"
#include "gtest/gtest.h"

TEST(VectorsTest, CalculateLength)
{
    vec3<double> vec(1, 2, 3);

    ASSERT_TRUE(utils::doubleCompare(vec.Len(), std::sqrt(1 * 1 + 2 * 2 + 3 * 3)));
}

TEST(VectorsTest, CalculateDotProduct)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(3, 2, 1);

    ASSERT_TRUE(utils::doubleCompare(Dot(vec1, vec2), 10));
}

TEST(VectorsTest, CalculateCrossProduct)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(1, 2, 3),
                 vecRes(0, 0, 0);

    ASSERT_TRUE(Cross(vec1, vec2) == vecRes);
}

TEST(VectorsTest, CheckAdditionOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(1, 2, 3),
                 vecRes(2, 4, 6);

    ASSERT_TRUE(vec1 + vec2 == vecRes);
}


TEST(VectorsTest, CheckSubstractionOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(1, 2, 3),
                 vecRes(0, 0, 0);

    ASSERT_TRUE(vec1 - vec2 == vecRes);
}

TEST(VectorsTest, CheckMultiplicationOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3);
    double scalar = 3;

    vec3<double> vecRes(3, 6, 9);

    ASSERT_TRUE(vec1 * scalar == vecRes);
}

TEST(VectorsTest, CheckDivisionOperatorCorrectness)
{
    vec3<double> vec1(3, 6, 9);
    double scalar = 3;

    vec3<double> vecRes(1, 2, 3);

    ASSERT_TRUE(vec1 / scalar == vecRes);
}

TEST(VectorsTest, CheckAdditionAssignmentOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(1, 2, 3),
                 vecRes(2, 4, 6);

    ASSERT_TRUE((vec1 += vec2) == vecRes);
}


TEST(VectorsTest, CheckSubstractionAssignmentOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3),
                 vec2(1, 2, 3),
                 vecRes(0, 0, 0);

    ASSERT_TRUE((vec1 -= vec2) == vecRes);
}

TEST(VectorsTest, CheckMultiplicationAssignmentOperatorCorrectness)
{
    vec3<double> vec1(1, 2, 3);
    double scalar = 3;

    vec3<double> vecRes(3, 6, 9);

    ASSERT_TRUE((vec1 *= scalar) == vecRes);
}

TEST(VectorsTest, CheckDivisionAssignmentOperatorCorrectness)
{
    vec3<double> vec1(3, 6, 9);
    double scalar = 3;

    vec3<double> vecRes(1, 2, 3);

    ASSERT_TRUE((vec1 /= scalar) == vecRes);
}






