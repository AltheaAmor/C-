#include <iostream>

int calculate_bareng(int days_ration) {
    int day = 1;
    int rate = 20;
    int miles = 50;
    while (day <= 13) {
        if (miles >= 200) {
            std::cout << "Reached civilization on day " << day << std::endl;
            return day;
        }
        rate -= 1;
        miles += rate - 2;
        day += 1;
        if (day > days_ration) {
            std::cout << "Collapsed on day " << day << std::endl;
            return day;
        }
    }
}

int main() {
    calculate_bareng(13);
    return 0;
}

