#include<iostream>

#define PRINT_JOE

int main()
{
	#ifdef PRINT_JOE
		std::cout<<"PRINT_JOE is defined"<<'\n';
	#endif
	
	#ifdef PRINT_BOB
		std::<cout<<"PRINT_BOB is defined"<<'\n';
	#endif
	
	#ifndef PRINT_BOB
		std::cout<<"PRINT_BOB is not defined"<<'\n';
	#endif
	
	#if 0
		std::cout<<"This will not be compiled"<<'\n';
	#endif
	return 0;
}
