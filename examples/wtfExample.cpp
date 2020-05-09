//
// Created by Dana on 2019/6/27.
//

double InvSqrt(double number) {
    double x2, y;
    const double threehalfs = 1.5F;
    union {
        double d;
        __int64 i;
    } d;
    x2 = number * 0.5F;
    y = number;
    d.d = y;
    d.i = 0x5fe6ec85e7de30da - (d.i >> 1);
    y = d.d;
    y = y * (threehalfs - (x2 * y * y)); // 1st iteration
    y = y * (threehalfs - (x2 * y * y));// 2nd iteration, this can be removed
    return y;
}

int main() {
    return 0;
}