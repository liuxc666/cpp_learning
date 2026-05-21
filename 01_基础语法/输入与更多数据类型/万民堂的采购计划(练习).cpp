/*
独立编写的练习
*/

#include<iostream>
#include<string>
int main(){
    std::string fruit;
    int number;
    double morla;
    std::cout<<"Today we're going to make a spicy dessert to trick the flowers out of their nectar. Besides tricking the flowers, what other ingredients do we need?";
    std::cin>>fruit;
    std::cout<<"So how many do you think we should use?"<<fruit;
    std::cin>>number;
    std::cout<<"Traveler, could you help me see how much "<<fruit<<" costs on that sign?";
    std::cin>>morla;
    morla = number * morla;
    std::cout<<"Okay, let me see... Alright, it's "<<morla<<" in total. Recently, "<<fruit<<" has gone up in price.";
    return 0;

}