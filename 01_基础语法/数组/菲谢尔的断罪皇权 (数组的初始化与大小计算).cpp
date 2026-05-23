#include<iostream>
#include<string>

int main(){
    std::string fischlVirtues[] = {"elegance","nobility","mystery"};
    int totalSizeBytes = sizeof(fischlVirtues);
    int singleElementSizeBytes = sizeof(fischlVirtues[0]);
    int numberOfElements = totalSizeBytes / singleElementSizeBytes;

    std::cout << "Fischl's Three Virtues of this journey:" << std::endl;
    std::cout << "Total memory size of the array: " << totalSizeBytes << " bytes." << std::endl;
    std::cout << "Memory size of one string element: " << singleElementSizeBytes << " bytes." << std::endl;
    std::cout << "Number of elements in the array: " << numberOfElements << std::endl;

    std::cout<<"\n---The Virtues---"<<std::endl;
    for(int i = 0; i < numberOfElements; i++){
        std::cout<<"virtue "<< i +1 <<" : "<<fischlVirtues[i]<<std::endl;
    }
    return 0;
}
