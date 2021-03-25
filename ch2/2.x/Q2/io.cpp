#include<iostream>

int readNumber()
{
    std::cout<<"Enter an integer: ";
    int nr{};
    std::cin>>nr;
    return nr;
    
}

void writeAnswer(int ans)
{
    std::cout<<"The answer is: "<<ans<<'\n';
}
