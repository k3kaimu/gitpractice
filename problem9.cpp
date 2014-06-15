#include <iostream>
#include <cstddef>

int main()
{
    for(uint32_t a = 1; a < 1000; ++a)
        for(auto b = a; b < 1000 - a; ++b){
            auto const c = 1000 - a - b;

            if(a * a + b * b == c * c){
                std::cout << a * b * c << std::endl;
                goto Lend;
            }
        }

  Lend:
    return 0;
}
