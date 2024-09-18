#include <iostream>
#include <filesystem>
#include <fstream>
#include <unordered_map>
#include <vector>

namespace fs = std::filesystem;

struct Skel {
    std::string d;
    std::vector<std::string> f;
};

// Trace Macro
#define ENABLE_LOGGING

#ifdef ENABLE_LOGGING
    #define TRACE(msg) \
        std::cout << __FILE__ << ":" << __LINE__ << " " << __func__ << "() - " << msg << std::endl;
#else
    #define TRACE(msg)
#endif

int main(int argc, char* argv[]) {
    TRACE("Starting program");

    std::ifstream f(".env"); 
    if (!f) {
        TRACE("Failed to open .env file");
        return 1;
    }
    TRACE(".env file opened successfully");

    std::unordered_map<std::string, std::vector<Skel>> skels;
    std::string l; 

    while (std::getline(f, l)) {
        TRACE("Read line: " + l);
        
        // Remove comments
        auto p = l.find('#');
        if (p != std::string::npos) {
            TRACE("Comment found, truncating line");
            l = l.substr(0, p);
        }

        // Trim whitespace
        l.erase(0, l.find_first_not_of(" \t\r\n"));
        l.erase(l.find_last_not_of(" \t\r\n") + 1);

        if (l.empty()) {
            TRACE("Empty line after trimming, skipping");
            continue;
        }

        // Parse key = value
        auto ep = l.find('=');
        if (ep == std::string::npos) {
            TRACE("No '=' found, skipping line");
            continue;
        }

        std::string k = l.substr(0, ep);
        std::string v = l.substr(ep + 1);

        // Trim key
        k.erase(0, k.find_first_not_of(" \t\r\n"));
        TRACE("Parsed key: " + k + ", value: " + v);

        // You can add further processing here, depending on how you want to use the key-value pairs
        std::cout << "key: " << k << std::endl << "value: " << v << std::endl;
    }

    TRACE("Program finished");
    return 0;
}

