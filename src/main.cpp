#include <iostream>
#include "..\src\trade\exchange_api\exchange_api.h"

int main() {
    std::string jsonData = getAPIData();

    if (!jsonData.empty()) {
        std::cout << "JSON Data:" << std::endl;
        std::cout << jsonData << std::endl;
    }

    return 0;
}