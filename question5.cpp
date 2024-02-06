#include <iostream>
#include <cmath>

class Triangle
{
    public:
    float calculateArea(float base, float height)
    {
        return 0.5 * base * height;
    }
void calculateArea(float base, float height, float &result)
{
    result = 0.5 * base * height;
}
};

int main()
{
    Triangle triangleObject;

    float base1 = 5.0, height1 = 8.0;
    float area1 = triangleObject.calculateArea(base1,height1);
    std::cout << "Area of the triangle (Call by Value): " << area1 << std::endl;

    float base2 = 7.0, height2 = 10.0, area2;

    triangleObject.calculateArea(base2,height2,area2);
    std::cout << "Area of the triangle (Call by Reference): " << area2 << std::endl;

    return 0;
}
