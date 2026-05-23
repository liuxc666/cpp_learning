#include<iostream>
#include<string>

int main(){
    std::string loot[4];
    loot[0] = "raw meat";
    loot[1] = "fowl";
    loot[2] = "mushroom";
    loot[3] = "bird egg";

    std::cout<<"\n---Loot Inventory---"<<std::endl;

    for (int i = 0 ; i<4 ; i++){
        std::cout<<"item"<<i + 1<<" : "<<loot[i]<<std::endl;
    }
    return 0 ;

}