#include <iostream>
#include <string>

int main() {
    // 声明需要的变量
    std::string itemName;
    int quantity;
    double pricePerItem;
    double totalPrice;

    // 第一次交互：获取食材名称
    std::cout << "Xiangling's Shopping List Helper!" << std::endl;
    std::cout << "What ingredient are we buying? ";
    std::cin >> itemName;

    // 第二次交互：获取数量
    std::cout << "How many do we need? ";
    std::cin >> quantity;

    // 第三次交互：获取单价
    std::cout << "How much Mora does one cost? ";
    std::cin >> pricePerItem;

    // 进行计算
    totalPrice = quantity * pricePerItem;

    // 输出最终的采购清单
    std::cout << "\n--- Shopping List Summary ---" << std::endl;
    std::cout << "Item:         " << itemName << std::endl;
    std::cout << "Quantity:     " << quantity << std::endl;
    std::cout << "Price per item: " << pricePerItem << " Mora" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "Total Cost:   " << totalPrice << " Mora" << std::endl;

    return 0;
}