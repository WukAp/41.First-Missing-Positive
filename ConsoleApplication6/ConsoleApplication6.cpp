
#include <iostream>
#include <vector>
#include <algorithm>


int firstMissingPositive (std::vector<int>& nums) {
    std::vector<int> vector = nums;
    sort(begin(vector), end(vector));

    int index_of_first_positive = 0;

    while (index_of_first_positive < nums.size()
        && vector[index_of_first_positive] < 1)
        index_of_first_positive++;


    for (int n = 1, curr_index = index_of_first_positive; curr_index < vector.size(); n++, curr_index++) {
        if (vector[curr_index] != n)
            if (curr_index > 0 && vector[curr_index] == vector[curr_index -1])
                n--;
            else 
                return n;
    }

    return std::max(vector[vector.size() - 1] + 1, 1);
}

void printVector(std::vector<int> nums) {
    for (int i = 0; i < nums.size(); i++)
        std::cout << nums[i] << ' ';
    std::cout << std::endl;
}

int main(){
    {
        std::vector<int> vector = { 1, 2, 0 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }

    {
        std::vector<int> vector = { 3, 4, -1, 1 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }

    {
        std::vector<int> vector = { 7, 8, 9, 11, 12 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }
    {
        std::vector<int> vector = { 4,3,4,1,1,4,1,4, 2 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }

    {
        std::vector<int> vector = { 4,1,3,1,1,0,1,2 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }

    {
        std::vector<int> vector = { 4,3,4,1,1,4,1,4 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }

    {
        std::vector<int> vector = { 2 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }

    {
        std::vector<int> vector = { 0 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }
    {
        std::vector<int> vector = { 1 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }

    {
        std::vector<int> vector = { -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }

    {
        std::vector<int> vector = { -1, 0, -1, -2, -3, -4, -5, -6, -7, -8, -9 };
        std::cout << "input: ";
        printVector(vector);
        std::cout << firstMissingPositive(vector) << std::endl;
    }    
}
