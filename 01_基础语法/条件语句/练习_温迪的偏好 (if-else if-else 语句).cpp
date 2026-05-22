
#include<iostream>
#include<string>

int main(){
    std::string ingredientType = "mushroom";
    std::cout<<"checking the casket...The ingredient is: "<<ingredientType<<std::endl;

    if (ingredientType == "boar"){
        std::cout<<"Xingling is happy! We can make Wanmin Restaurrant's signature dishes!"<<std::endl;

    }else if (ingredientType == "fowl"){
        std::cout<<"venti is pleased! perfect for Sweet Mademe."<<std::endl;

    }else if(ingredientType == "fish"){
        std::cout<<"Paimon seems excited for some Grilled Fish..."<<std::endl;

    }else{
        std::cout<<"It's neither meat,fowl,nor fish.Let's just gather some Sunsettias."<<std::endl;

    }

    return 0;
}