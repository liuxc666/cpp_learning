/*
向变量中输入字符串
*/

#include<iostream>
#include<string>

int main() {
    std::string songName;
    std::cout<<"Venti asks:What shall be the name of this impromptu ballad?"<<std::endl;
    std::cin>>songName;
    std::cout<<"A ballad named " <<songName<< " ...let it ride on the wind!"<<std::endl;
return 0;
}