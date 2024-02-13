#include "gtest/gtest.h"
#include "InfFloat.cpp"

TEST(InfFloatTests, Construction) {
    // Test default constructor
    InfFloat num1;
    EXPECT_EQ(num1.ToString(), "");

    // Test constructor from string
    InfFloat num2("123.456000");
    EXPECT_EQ(num2.ToString(), "123.456000");

    // Test constructor from int
    InfFloat num3(123456);
    EXPECT_EQ(num3.ToString(), "123456");

    // Test constructor from double
    InfFloat num4(123.456);
    EXPECT_EQ(num4.ToString(), "123.456000");

    // Test constructor from unsigned long long
    InfFloat num5(1234567890123456789ULL);
    EXPECT_EQ(num5.ToString(), "1234567890123456789");
}

TEST(InfFloatTests, Assignment) {
    // Test assignment from int
    InfFloat num1;
    num1 = 123456;
    EXPECT_EQ(num1.ToString(), "123456");

    // Test assignment from double
    InfFloat num2;
    num2 = 123.456;
    EXPECT_EQ(num2.ToString(), "123.456000");

    // Test assignment from unsigned long long
    InfFloat num3;
    num3 = 1234567890123456789ULL;
    EXPECT_EQ(num3.ToString(), "1234567890123456789");

    // Test assignment from string
    InfFloat num4;
    num4 = "123.456";
    EXPECT_EQ(num4.ToString(), "123.456");
}

TEST(InfFloatTests, ArithmeticOperators) {
    // Test addition
    InfFloat num1("123.456");
    InfFloat num2("789.012");
    InfFloat result = num1 + num2;
    EXPECT_EQ(result.ToString(), "912.468");

    // Test subtraction
    result = num1 - num2;
    EXPECT_EQ(result.ToString(), "-665.556");

    // Test multiplication
    result = num1 * num2;
    EXPECT_EQ(result.ToString(), "97408.265472");

    // Test division
    result = num1 / num2;
    EXPECT_EQ(result.ToString(), "0.156");

}

TEST(InfFloatTests, ComparisonOperators) {
    // Test equality
    InfFloat num1("123.456");
    InfFloat num2("123.456");
    EXPECT_TRUE(num1 == num2);

    // Test inequality
    num2 = "123.457";
    EXPECT_TRUE(num1 != num2);

    // Test greater than
    num2 = "123.455";
    EXPECT_TRUE(num1 > num2);

    // Test greater than or equal to
    num2 = "123.456";
    EXPECT_TRUE(num1 >= num2);

    // Test less than
    num2 = "123.457";
    EXPECT_TRUE(num1 < num2);

    // Test less than or equal to
    num2 = "123.456";
    EXPECT_TRUE(num1 <= num2);

    num1 = InfFloat('0');
    num2 = InfFloat("-0");
    EXPECT_TRUE(num1 == num2);

}

TEST(InfFloatTests, ToString) {
    // Test ToString() method
    InfFloat num1("123.456");
    EXPECT_EQ(num1.ToString(), "123.456");

    // Test ToString() method with precision
    num1.SetPrecision(2);
    EXPECT_EQ(num1.ToString(), "123.46");
}

TEST(InfFloatTests, Abs) {
    // Test Abs() method
    InfFloat num1("-123.456");
    EXPECT_EQ(num1.Abs().ToString(), "123.456");
}

TEST(InfFloatTests, Floor) {
    // Test Floor() method
    InfFloat num1("123.456");
    EXPECT_EQ(num1.Floor().ToString(), "123.000");
}

TEST(InfFloatTests, Decimals) {
    // Test Decimals() method
    InfFloat num1("123.456");
    EXPECT_EQ(num1.Decimals(), 3);
}

TEST(InfFloatTests, Ints) {
    // Test Ints() method
    InfFloat num1("123.456");
    EXPECT_EQ(num1.Ints(), 3);
}

TEST(InfFloatTests, MemorySize) {
    // Test MemorySize() method
    InfFloat num1("123.456");
    EXPECT_EQ(num1.MemorySize(), sizeof(InfFloat) + 6 * sizeof(char));
}

TEST(InfFloatTests, ToInt) {
    // Test ToInt() method
    InfFloat num1("123");
    EXPECT_EQ(num1.ToInt(), 123);
}

TEST(InfFloatTests, ToDouble) {
    // Test ToDouble() method
    InfFloat num1("123.456");
    EXPECT_EQ(num1.ToDouble(), 123.456);
}

TEST(InfFloatTests, CharToInt) {
    // Test CharToInt() method
    EXPECT_EQ(InfFloat::CharToInt('0'), 0);
    EXPECT_EQ(InfFloat::CharToInt('9'), 9);
}

TEST(InfFloatTests, IntToChar) {
    // Test IntToChar() method
    EXPECT_EQ(InfFloat::IntToChar(0), '0');
    EXPECT_EQ(InfFloat::IntToChar(9), '9');
}

TEST(InfFloatTests, CompareNum) {
    // Test CompareNum() method
    InfFloat num1("123.456");
    InfFloat num2("789.012");

    num2 = "123.456";
    EXPECT_EQ(InfFloat::CompareNum(num1, num2), 0);

    num2 = "123.457";
    EXPECT_EQ(InfFloat::CompareNum(num1, num2), 2);
}