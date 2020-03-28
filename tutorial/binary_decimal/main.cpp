
#include <iostream>
#include <cmath>

int BinaryToDecimal(int binaryVal){
    int decimalInt = 0;
    int currPwr = 0;
    while(binaryVal > 0){
        //check: mod
        //std::cout << "Check: binaryVal is:" << binaryVal <<","<< decimalInt << "," << currPwr << std::endl;
        if (binaryVal % 10 != 0){
              decimalInt = decimalInt + pow(2,currPwr);
              //std::cout << "Decimal int is now:" << decimalInt<< std::endl;
        }
        //
        //increment currPwr
        ++currPwr;
        //divide binaryVal by 0
	binaryVal /= 10;
    }
    return decimalInt;
}

int main(){
    char typeInput;// typeInput may not end with constant
    std::cout << "Enter type to enter(b = binary; d = decimal)" << std::endl;
    while(!(typeInput == 'b' || typeInput == 'd') ){
        std::cin >> typeInput;
	if (typeInput != 'b' &&  typeInput != 'd'){
	    std::cout << "Wrong input entered, try again" << std::endl;
	}
    }

    if(typeInput == 'b'){
	int binaryNum = -1;
	while(binaryNum < 0) {
	    std::cout << "Enter positive binary number" << std::endl;
	    std::cin >> binaryNum;
	}
	int decimalResult = BinaryToDecimal(binaryNum);
	std::cout << decimalResult << std::endl; 

	
    }
    return 0;
}
