#include <iostream>
int largeRooms {0};
int smallRooms {0};
const int largeRoomPrice {30};
const int smallRoomPrice {25};
const float tax {0.06};
const int billValidUpto {30};

int main(){
    std::cout << "Number of large rooms:" << std::endl;
    std::cin >> largeRooms ;
    std::cout << "Number of small rooms:" <<std::endl;
    std::cin >> smallRooms;
    std::cout << "Price for large rooms:$" <<largeRoomPrice <<std::endl;
    std::cout << "Price for small rooms:$" << smallRoomPrice <<std::endl;
    int total = (largeRoomPrice*largeRooms) + (smallRoomPrice*smallRooms);
    float totalTax = total * tax;
    float grandTotal =  total + totalTax;
    std::cout << "Total:$" << total <<std::endl;
    std::cout << "Tax:$" << totalTax << std::endl;
    std::cout << "Total estimate:$" << grandTotal << std::endl;
    std::cout << "Bill valid for" << billValidUpto << "days" << std::endl;
    return 0;
}


   