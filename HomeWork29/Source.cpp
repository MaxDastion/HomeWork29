#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void main() {
    std::string path = "C:\\Program Files (x86)";
    for (const auto& entry : fs::directory_iterator(path)) {
        if (entry.is_directory()) {
            std::cout << entry.path().filename().string() << std::endl;
        }
    }

}