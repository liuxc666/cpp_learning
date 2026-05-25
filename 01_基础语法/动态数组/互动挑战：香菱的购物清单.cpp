#include<iostream>
#include<string>
#include<vector>

int main(){
    std::vector<std::string>shoppingList;
    shoppingList.push_back("jueyu chili");
    shoppingList.push_back("lotus head");
    std::string options;
    // std::cout<<"-------shoppingList--------\n";
    for(size_t i = 0 ;i < shoppingList.size(); i++){
        std::cout<<"we need:  "<<shoppingList[i]<<std::endl;
    }
    while(1==1){
        std::cout<<"What else to add? (type 'done' to finish):";
        std::cin>>options;
        if(options == "finish"){
            break;
            
        }else{
            shoppingList.push_back(options);
            std::cout<<"ok add to "<<options<<std::endl;
        }
    }
    std::cout<<"-------shoppingList--------\n";
    for(size_t i = 0 ;i < shoppingList.size(); i++){
        std::cout<<i + 1<<" : "<<shoppingList[i]<<std::endl;
    }
    std::cout<<"--- Final Shopping List ---";
    return 0;
}