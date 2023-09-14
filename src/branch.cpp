#include "branch.h"

bool predict(bool previous_value)
{
    //TODO implement here
    return false;
}


float predict_array(std::uint8_t* ptr, std::size_t length)
{
    std::size_t count = 0;
    for(std::size_t i = 0; i < length; i++)
    {
        if(i == 0)
        {
            continue;
        }
        if(predict(ptr[i-1]) == ptr[i])
        {
            count++;
        }
    }
    return static_cast<float>(count)/static_cast<float>(length-1);
}