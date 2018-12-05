#include <iostream>
#include <vector>
std::vector<std::vector<int>> NewMatrixSum(std::vector<std::vector<int>> matrix1,std::vector<std::vector<int>> matrix2);
int main() {
    std::vector<std::vector<int>> matrix1 {{1,2}, 
                                           {3,4}};
    std::vector<std::vector<int>> matrix2 {{5,6},
                                           {7,8}};
    std::vector<std::vector<int>> result = NewMatrixSum(matrix1,matrix2);
    for (int i = 0; i < matrix1.size() ; ++i)
        for (int j = 0; j < matrix1.size(); ++j)
            std::cout << result[i][j] << std::endl;


    return 0;
}
std::vector<std::vector<int>> NewMatrixSum(std::vector<std::vector<int>> matrix1,std::vector<std::vector<int>> matrix2){
    std::vector<std::vector<int>> newMatrix {};
    for (int i = 0; i < matrix1.size() ; ++i) {
        std::vector<int> elements;
        for (int j = 0; j <matrix1.size(); ++j) {
           elements.push_back( matrix1[i][j] + matrix2[i][j]);
        }
        newMatrix.push_back(elements);
    }
   return newMatrix;
}