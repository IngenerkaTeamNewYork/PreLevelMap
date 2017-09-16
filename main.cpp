#include <iostream>
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;

int main() {
    std::fstream a("cfg.json");
    json json1;
    json1.parse(a);

    std::string corners = json1["corner"]["start"];
    std::string cornere = json1["corner"]["end"];

    // leftupper, rightdown, leftdown

    if (corners == "leftupper") {
        // Start is in left upper corner
    } else if (corners == "rightdown") {
        // Start is in left upper corner
    } else if (corners == "leftdown") {
        // Start is in left down corner
    } else {
        exit(1);
    }

    if (cornere == "leftupper") {
        // End is in left upper corner
    } else if (cornere == "rightdown") {
        // End is in left upper corner
    } else if (cornere == "leftdown") {
        // End is in left down corner
    } else {
        exit(1);
    }

    if (cornere == corners) {
        exit(1);
    }

    return 0;
}