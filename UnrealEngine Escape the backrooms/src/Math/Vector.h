#pragma once
#include <complex>

namespace Math
{
    class Vector3
    {
    private:
        float x{};
        float y{};
        float z{};
    public:
        constexpr Vector3() : x(0), y(0), z(0) {}
        constexpr Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

        friend constexpr Vector3 operator-(const Vector3& lhs, const Vector3& rhs) {
            return Vector3(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z);
        }

        // Method to calculate the length of the vector
        float length() const {
            return std::sqrt(x * x + y * y + z * z);
        }
        // Method to calculate the distance to another vector
        inline float distance(const Vector3& other) const {
            return (*this - other).length();
        }
    };

    class Vector2
    {
    private:
        float x{};
        float y{};
    public:

    };
}