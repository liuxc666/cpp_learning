#include<iostream>

int main(){
    int arrowsInQuiver = 8;
    int counteArrows = 0;

    std::cout<<"Starting to count the arrows.."<<std::endl;

    while (arrowsInQuiver > 0){
        arrowsInQuiver--;
        counteArrows++;
        std::cout<<"Counted one arrow. Total counted: "<<counteArrows<<".Arrows left: "
<<arrowsInQuiver<<std::endl;

    }
    std::cout<<"\nFinished counting. there are "<<counteArrows<<"arrows in total."<<std::endl;
    return 0;
}