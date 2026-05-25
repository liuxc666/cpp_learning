#include<iostream>
#include<vector>
#include<string>

int main(){
    std::vector<std::string>tasks;

    std::cout<<"Initial number of tasks: "<<tasks.size()<<std::endl;
    tasks.push_back("picking grapes");
    tasks.push_back("cleaning barrels");
    tasks.push_back("driving away hilichurls");
    tasks.push_back("delivering goods");

    std::cout<<"number of tasks after adding the initial ones: "<<tasks.size()<<std::endl;

    std::cout<<"\nan urgent commission arrives from Master Diluc"<<std::endl;

    tasks.push_back("rescue the cargo balloon near springvale");

    std::cout<<"updated number of tasks: "<<tasks.size()<<std::endl;

    return 0;
}