#include <iostream>
#include <filesystem>

bool pathExist(std::string path){
    std::filesystem::path dirPath("/data");
    if (std::filesystem::is_directory(dirPath)){
        return true;
    }
}