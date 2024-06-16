#include <iostream>

int main() {
    int N;
    std::cout << "Введіть кількість секунд з початку доби: ";
    std::cin >> N;

    // Знайти кількість секунд з початку останньої години
    int seconds_since_last_hour = N % 3600;

    // Знайти кількість повних хвилин з початку останньої години
    int full_minutes_since_last_hour = seconds_since_last_hour / 60;

    std::cout << "Кількість повних хвилин з початку останньої години: " 
              << full_minutes_since_last_hour << std::endl;

    return 0;
}
