#include <string>
#include <map>
#include <vector>

class Solution {
public:
    string intToRoman(int num) {
        // Map of values to their Roman symbols
        // std::map keeps them sorted by key automatically
        std::map<int, std::string> romanMap = {
            {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"},
            {10, "X"}, {40, "XL"}, {50, "L"}, {90, "XC"},
            {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"},
            {1000, "M"}
        };

        std::string result = "";

        
        for (auto it = romanMap.rbegin(); it != romanMap.rend(); ++it) {
            int val = it->first;
            std::string symbol = it->second;

            
            while (num >= val) {
                num -= val;
                result += symbol;
            }
        }

        return result;
    }
};