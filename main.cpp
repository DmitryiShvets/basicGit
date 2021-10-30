//
// Created by Dmitry on 30.10.2021.
//

int DaysInYear(int year);

int DaysInYear(int year) {
    if (year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0))return 366;
    else return 365;
}

int DaysInYearRange(int a, int b) {
    auto res = 0;
    for (; a < b; a++) {
        if (a % 4 == 0 && !(a % 100 == 0 && a % 400 != 0))res += 366;
        else res += 365;
    }
    return 0;
}

int DaysInYearRange(int a, int b);

int main() {
    return 0;
};