#pragma once

#include <vector>
#include <string>

namespace Syroot::BinaryData::Core
{
    class EncodingExtension
    {
    public:
        static std::string GetString(const std::vector<char> &bytes)
        {
            // Convert the vector of bytes to a null-terminated C-style string.
            std::string str(bytes.begin(), bytes.end());

            // Use the UTF-8 encoding to convert the string to a byte array.
            std::vector<char> utf8_bytes = std::vector<char>(str.begin(), str.end());
            return std::string(utf8_bytes.begin(), utf8_bytes.end());
        }
    };
} // namespace Syroot::
