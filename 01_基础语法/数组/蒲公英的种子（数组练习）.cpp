#include<iostream>

int main(){
    int dds[5];
    dds[0] = 5;
    dds[1] = 7;
    dds[2] = 4;
    dds[3] = 6;
    dds[4] = 5;

    std::cout<<"wendi say:'Help me count how many dandelion seeds there are.'"
    <<std::endl;

    int all_seeds = 0;
    for(int i = 0;i<5;i++){
        std::cout<<"paimon:let me see see,this dandelion have "<<dds[i]<<" dandelion seeds\n";
        all_seeds = all_seeds + dds[i];
       // std::cout<<"There are "<<all_seeds<<" seeds.";
    }
    std::cout<<"There are "<<all_seeds<<" seeds.";
    return 0;
}
