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

int main()
{
    int a{readNumber()};
    int b{readNumber()};
	
    writeAnswer(a+b);
    return 0;
}
