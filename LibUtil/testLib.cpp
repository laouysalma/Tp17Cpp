#include "Logger.h"
#include "Config.h"
#include <iostream>

int main() {
    Logger::getInstance().log("Test de la librairie");
    Config cfg;
    std::cout << "Host: " << cfg.get("host") << std::endl;
    std::cout << "Port: " << cfg.get("port") << std::endl;
}
