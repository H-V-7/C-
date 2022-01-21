#include <iostream>
#include <vector>

int main(){
    std::vector <int> vector1;
    std::vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    printf("%d\n",vector1.at(0));
    printf("%d\n",vector1.at(1));
    printf("%ld\n",vector1.size());

    vector2.push_back(100);
    vector2.push_back(200);
    printf("%d\n",vector2.at(0));
    printf("%d\n",vector2.at(1));
    printf("%ld\n",vector2.size());
    
    //2d vector
    //vector inside a vector and its type
    std::vector <std::vector<int>> vector_2D;
    //we can add vector inside vector 
    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);

    //displaying 2D vector
    //index of vector2D i.e row and index of vector1 or vector 2 as colomn
    printf("%d\n",vector_2D.at(0).at(0));
    printf("%d\n",vector_2D.at(0).at(1));
    printf("%d\n",vector_2D.at(1).at(0));
    printf("%d\n",vector_2D.at(1).at(1));

    return 0;
}
