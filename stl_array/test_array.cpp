#include "test_array.h"



void test_array_1(){
	std::array<int,10> arr = {9,8,7,6,5,4,3,2,1,0};
	std::cout << "array:" << std::endl;
	auto it = arr.begin();
	while(it != arr.end()){
		std::cout << *it << std::endl;
		++it;
	}	
}

void test_array_2(){
	std::array<int,10> arr = {9,8,7,6,5,4,3,2,1,0};
	std::cout << "reverse iterator:" << std::endl;
	auto rit = arr.rbegin();
	while (rit != arr.rend()){
		std::cout << *rit << '\t';
		++rit;
	}
	std::cout << std::endl;
	std::cout << "arr size:" << arr.size() << std::endl; 
}
