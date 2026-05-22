#include <iostream>

int main() {
    std::cout << "Welcome to Aamer's Room Cleaning Service.\n"
              << "=========================================\n\n"
              << "GBP 35 per large room\n"
              << "GBP 25 per small room\n"
              << "Sales tax rate: 6%\n\n";

    int num_l_rooms{};
    std::cout << "How many large rooms would you like cleaning: ";
    std::cin >> num_l_rooms;

    int num_s_rooms{};
    std::cout << "How many small rooms would you like cleaning: ";
    std::cin >> num_s_rooms;

    const double sales_tax{0.06};
    const int l_room_price{35};
    const int s_room_price{25};

    double cost_before_tax = (l_room_price * num_l_rooms) + (s_room_price * num_s_rooms);
    double tax_amount = cost_before_tax * sales_tax;
    double total_cost = cost_before_tax + tax_amount;

    std::cout << "\nCost for cleaning large rooms: GBP " << l_room_price * num_l_rooms << "\n"
              << "Cost for cleaning small rooms: GBP " << s_room_price * num_s_rooms << "\n"
              << "Sales tax: GBP " << tax_amount << "\n"
              << "=====================================================================\n"
              << "Total cost: GBP " << total_cost << "\n";

    return 0;
}

