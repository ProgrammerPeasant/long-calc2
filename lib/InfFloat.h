#pragma once

#include <iostream>
#include <deque>
#include <cmath>
#include <sstream>
#include <vector>

class InfFloat
{
private:
    char m_sign{};
    std::deque<char> m_number;
    int m_decimals{};

public:
    InfFloat();
    InfFloat(const std::string &m_number);
    InfFloat(const int m_number);
    InfFloat(const double m_number);

    InfFloat &operator=(int Num);
    InfFloat &operator=(double Num);
    InfFloat &operator=(unsigned long long Num);
    InfFloat &operator=(const std::string &strNum);
    InfFloat operator+(const InfFloat &other) const;
    InfFloat operator-(const InfFloat &other) const;
    InfFloat operator*(const InfFloat &other) const;
    InfFloat operator/(const InfFloat &other) const;

    bool operator==(const InfFloat &right) const;
    bool operator!=(const InfFloat &right) const;
    bool operator>(const InfFloat &right) const;
    bool operator>=(const InfFloat &right) const;
    bool operator<(const InfFloat &right) const;
    bool operator<=(const InfFloat &right) const;

    friend std::ostream &operator<<(std::ostream &out, const InfFloat &right);
    [[nodiscard]] std::string ToString() const;
    void SetPrecision(int prec);
    static std::string PeriodicToCommon(const std::string &str);
    [[nodiscard]] InfFloat Abs() const;

    explicit InfFloat(unsigned long long int m_number);

public:
    void LeadZeroes();
    InfFloat Floor() const;
    [[nodiscard]] inline int Decimals() const { return m_decimals; };
    [[nodiscard]] inline int Ints() const { return m_number.size() - m_decimals; };
    [[nodiscard]] inline int MemorySize() const { return sizeof(*this) + m_number.size() * sizeof(char); };
    explicit operator int() const { return std::stoi(ToString()); }

    int ToInt() const { return static_cast<int>(*this); }

    explicit operator double() const { return std::stod(ToString()); }

    double ToDouble() const { return static_cast<double>(*this); }

    inline static int CharToInt(const char &val) { return (val - '0'); };
    inline static char IntToChar(const int &val) { return (val + '0'); };

    static int CompareNum(const InfFloat &left, const InfFloat &right);
    static InfFloat Sum(const InfFloat &left, const InfFloat &right);
    static InfFloat Subtract(const InfFloat &left, const InfFloat &right);
    static InfFloat Multiply(const InfFloat &left, const InfFloat &right);

    InfFloat sqrtBig(const InfFloat &n, unsigned long long int iter);
};