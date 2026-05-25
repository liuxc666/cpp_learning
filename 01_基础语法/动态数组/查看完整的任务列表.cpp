#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> tasks;
    tasks.push_back("Picking Grapes");
    tasks.push_back("Cleaning Barrels");
    tasks.push_back("Driving away Hilichurls");
    tasks.push_back("Delivering Goods");
    tasks.push_back("Rescue the cargo balloon near Springvale");

    std::cout << "--- Current Task List for Dawn Winery ---" << std::endl;

    // We use a for loop, almost identical to the one for arrays.
    // But the condition is now much cleaner and safer: i < tasks.size()
    for (int i = 0; i < tasks.size(); i++) {
        // Accessing elements with [] works exactly the same as with arrays.
        std::cout << i + 1 << ". " << tasks[i] << std::endl;
    }
    
    return 0;
}