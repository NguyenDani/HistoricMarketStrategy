#include <iostream>
#include "trade/exchange_api/exchange_api.h"

int main() {
    std::string jsonData = exchange_api();

    if (!jsonData.empty()) {
        std::cout << "JSON Data:" << std::endl;
        std::cout << jsonData << std::endl;
    }

    return 0;
}