#pragma once

#include <cstdlib>
#include <cstdint>

bool predict(bool previous_value);
float predict_array(std::uint8_t* ptr, std::size_t length);