//
// Created by Dmitry on 30.10.2021.
//

int DaysInYear(int year);

int DaysInYear(int year) {
    if (year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0))return 366;
    else return 365;
}

int main() {

    return 0;
};