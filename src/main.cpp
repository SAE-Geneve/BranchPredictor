#include "branch.h"
#include <vector>
#include <iostream>

int main()
{
    std::vector<std::uint8_t> values(1024, 0);

    const float zero_percent = predict_array(values.data(), values.size());
    std::cout << "Array of zero predict: "<<zero_percent*100<<"%\n";

    std::fill(values.begin(), values.end(), 1);
    const float one_percent = predict_array(values.data(), values.size());
    std::cout << "Array of one predict: "<<one_percent*100<<"%\n";

    for(std::size_t i = 0; i < values.size(); i++)
    {
        if(i == 0)
        {
            values[i] = 1;
        }
        else
        {
            values[i] = !values[i-1];
        }
    }
    const float alternate_percent = predict_array(values.data(), values.size());
    std::cout << "Array of alternate predict: "<<alternate_percent*100<<"%\n";

    std::sort(values.begin(), values.end());

    const float sorted_percent = predict_array(values.data(), values.size());
    std::cout << "Array of sorted predict: "<<sorted_percent*100<<"%\n";

    return 0;
}