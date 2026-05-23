#include<iostream>
#include<string>

int main(){
    std::string daily_tasks[] = {"picking grapes","cleaning barrels","driving away hilichurls","delivering goods"};
    int totalSizeBytes = sizeof(daily_tasks);
    int singleElementSizeBytes = sizeof(daily_tasks[0]);
    int numberOfElements = totalSizeBytes / singleElementSizeBytes;
    
    std::cout<<"There are "<<numberOfElements<<" tasks today.\n";

    for(int i = 0;i < numberOfElements;i++) {
        std::cout<<i + 1 <<" "<< daily_tasks[i]<<"\n";
    }

    int input_pass = 0;
    int user_choose;
    
    do{    
        std::cout<<"Traveler, which task do you want to take? (Enter a number 1-4):";
        std::cin>> user_choose;
        
        if(user_choose <= numberOfElements && user_choose > 0){
            input_pass = 1;
        }else{
            std::cout<<"The entered number is incorrect, please try again.\n";
        }
    }while(input_pass != 1);
    std::cout<<"You have chosen the task "<< daily_tasks[user_choose - 1]<<"\n";

    return 0;
}