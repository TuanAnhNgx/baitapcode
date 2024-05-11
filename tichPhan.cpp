#include <iostream>
#include <cmath>
#include <functional>

// Hàm tính giá tr? c?a hàm s? t?i di?m (x, y)
double function(double x, double y) {
    return (2 - x - y);
}

// Hàm tích phân kép s? d?ng phuong pháp hình thang
double integrate(double lowerX, double upperX, std::function<double(double)> lowerY, std::function<double(double)> upperY, int n) {
    double deltaX = (upperX - lowerX) / n;
    double sum = 0;

    for(int i = 0; i < n; ++i) {
        double x = lowerX + i * deltaX + deltaX / 2;
        double deltaY = (upperY(x) - lowerY(x)) / n;
        for(int j = 0; j < n; ++j) {
            double y = lowerY(x) + j * deltaY + deltaY / 2;
            sum += function(x, y) * deltaX * deltaY;
        }
    }

    return sum;
}

// Hàm main
int main() {
    // Ð?nh nghia các hàm lambda cho gi?i h?n du?i và gi?i h?n trên c?a y
    std::function<double(double)> lowerY =  { return -x; };
    std::function<double(double)> upperY =  { return 1-x; };

    // Tính và in ra giá tr? c?a tích phân
    std::cout << "Giá tr? tích phân: " << integrate(0, 1, lowerY, upperY, 10000) << std::endl;

    return 0;
}

