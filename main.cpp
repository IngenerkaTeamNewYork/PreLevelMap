#include <iostream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

int main() {

    json json1;
    std::ifstream myfile("../cfg.json", std::ios::out | std::ios::app | std::ios::binary);
    if (myfile.good()) {
        try {
            json1 << myfile;
        } catch (...) {
            std::cout << "Error processing json." << std::endl;
            std::terminate();
        }
        myfile.close();
    } else {
        exit(1);
    }


    std::string cornerStart = json1["start"];
    std::string cornerEnd = json1["end"];

    // leftupper, rightdown, leftdown

    if (cornerStart == "leftupper") {
        // TODO: Put code here
    } else if (cornerStart == "rightdown") {
        // TODO: Put code here
    } else if (cornerStart == "leftdown") {
        // TODO: Put code here
    } else {
        exit(1);
    }

    if (cornerEnd == "leftupper") {
        // TODO: Put code here
    } else if (cornerEnd == "rightdown") {
        // TODO: Put code here
    } else if (cornerEnd == "leftdown") {
        // TODO: Put code here
    } else {
        exit(1);
    }

    if (cornerEnd == cornerStart) {
        exit(1);
    }

    std::cout << cornerStart;

    return 0;
}
