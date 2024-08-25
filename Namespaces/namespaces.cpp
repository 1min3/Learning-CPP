#include <iostream>

namespace mecanique {
    std::string matière = "mecanique";
    std::string wi7da = "mm";
}

namespace physique {
    std::string matière = "physique";
    std::string wi7da = "m";
}

int main() {
    using namespace physique;
    
    // we declare what namespace we're using

    std::cout << "the wi7da used in " << matière << " is " << wi7da;

    return 0;
}
