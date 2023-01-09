#include <iostream>
#include <stdio.h>

class Stock {
    public:
        void get_val();
        void output();
    private:
        char name[10];
        int number;
        float unit_price;
        float tot_value;
};

void Stock::get_val() {
    std::cout << "Enter name of the share: ";
    std::cin >> this->name;
    std::cout << "\nNumber of share and the unit price: ";
    std::cin >> this->number >> this->unit_price;
    this->tot_value = this->unit_price * number;
}

void Stock::output() {
    std::cout << this->name << " " << this->number << " " << this->unit_price
        << " " << this->tot_value << std::endl;
}

int main() {
    Stock st;
    st.get_val();
    std::cout << "\nName: " << "Number: " << "Unit price: " << "Total value; " << std::endl;
    st.output();

    return 0;
}