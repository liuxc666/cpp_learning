/*
变量的创建、赋值与打印
*/
#include<iostream>

int main(){

    int appleCount = 12;

    std::cout << "Guoba is checking the supplies..we have:";
    std::cout << appleCount;
    std::cout << "apples" << std::endl;

    appleCount = appleCount - 3;

    std::cout << "paimon you little...!Now we only have:";
    std::cout <<appleCount <<"apples left"<<std::endl;
    return 0;
}