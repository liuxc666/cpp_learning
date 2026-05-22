#include<iostream>

int main(){
    char response;

    do{
        std::cout<<"Oz gives Fischl a piece of jerky. she tastes it. "<<std::endl;
        std::cout<<"Oz asks: 'mein Fraulein,would you llike another piece?'(y/n):";
        std::cin>>response;
    } while(response == 'y');
    std::cout<<"\nFischl proclaims: 'enough! the canquet of judgment is concluded!'"<<std::endl;
    return 0;
}