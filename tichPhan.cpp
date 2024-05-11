#include <iostream>
#include <cmath>
#include <functional>

// H�m t�nh gi� tr? c?a h�m s? t?i di?m (x, y)
double function(double x, double y) {
    return (2 - x - y);
}

// H�m t�ch ph�n k�p s? d?ng phuong ph�p h�nh thang
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

// H�m main
int main() {
    // �?nh nghia c�c h�m lambda cho gi?i h?n du?i v� gi?i h?n tr�n c?a y
    std::function<double(double)> lowerY =  { return -x; };
    std::function<double(double)> upperY =  { return 1-x; };

    // T�nh v� in ra gi� tr? c?a t�ch ph�n
    std::cout << "Gi� tr? t�ch ph�n: " << integrate(0, 1, lowerY, upperY, 10000) << std::endl;

    return 0;
}

