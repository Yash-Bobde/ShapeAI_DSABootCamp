#include <iostream>
#include <vector>

std::vector<int> left_rot(std::vector<int>& arr, int rot)
{
    std::vector<int> rotated_array;

    for (std::size_t i = rot; i < arr.size(); ++i)
    {
        rotated_array.push_back(arr[i]);
    }
    for (std::size_t i = 0; i < rot; ++i)
    {
        rotated_array.push_back(arr[i]);
    }
    return rotated_array;
}

int main()
{
    int num_elements, num_left_rot;

    std::cin >> num_elements;
    std::cin >> num_left_rot;

    std::vector<int> input_array(num_elements);
    for (int i = 0; i < num_elements; ++i)
    {
        std::cin >> input_array[i];
    }

    std::vector<int> result_array = left_rot(input_array, num_left_rot);

    for (int i = 0; i < num_elements; ++i)
    {
        std::cout << result_array[i] <<" ";
    }
    std::cout << "\n";
}
