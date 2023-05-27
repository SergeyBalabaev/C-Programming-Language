#include <utility>      // std::move
#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <string>       // std::string
#include <chrono>       // std::string

class LogDuration {
public:
    LogDuration(std::string id)
        : id_(std::move(id)) {
    }

    ~LogDuration() {
        const auto end_time = std::chrono::steady_clock::now();
        const auto dur = end_time - start_time_;
        std::cout << id_ << ": ";
        std::cout << "operation time"
            << ": " << std::chrono::duration_cast<std::chrono::milliseconds>(dur).count()
            << " ms" << std::endl;
    }

private:
    const std::string id_;
    const std::chrono::steady_clock::time_point start_time_ = std::chrono::steady_clock::now();
};

int main() {
    std::vector<uint8_t> big_vector(1e9, 0);

    {
        LogDuration ld("vector copy");
        std::vector<uint8_t> reciever(big_vector);
    }
    std::cout << "size of big_vector is " << big_vector.size() << '\n';
    {
        LogDuration ld("vector copy");
        std::vector<uint8_t> reciever(std::move(big_vector));
    }
    std::cout << "size of big_vector is " << big_vector.size() << '\n';
return 0;
}
