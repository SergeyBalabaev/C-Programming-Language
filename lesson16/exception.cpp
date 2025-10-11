#include <iostream>
#include <string>

int main() {
    try {
        std::string s = "Hello world!";
        std::cout << s.at(2) << std::endl;
        throw std::runtime_error("Hello! Im a runtime error");
        throw std::logic_error("Hello! Im a logic error");
    }
    catch (std::out_of_range e) {
        std::cerr << "Caught an out_of_range exception: " << e.what() << std::endl;
    }
    catch (std::logic_error e) {
        std::cerr << "Caught an throw logic error: " << e.what() << std::endl;
    }
    catch (std::runtime_error e) {
        std::cerr << "Caught an throw runtime error: " << e.what() << std::endl;
    }
    return 0;
}
