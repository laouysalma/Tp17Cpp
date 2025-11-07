#include "Config.h"

Config::Config() {
    data["host"] = "localhost";
    data["port"] = "6080";
}

std::string Config::get(const std::string& key) const {
    auto it = data.find(key);
    return (it != data.end()) ? it->second : "";
}
