#include <cstddef>
#include <cstdint>
#include <iostream>


int main()
{
    uint64_t maxN = 0,
             maxCNT = 0;

    for(uint64_t n = 3; n < 1000000; n += 2){
        uint64_t x = n,
                 cnt = 0;
        
        while(x != 1){
            if(x % 2 == 0)
                x /= 2;
            else
                x = x * 3 + 1;
            ++cnt;
        }

        if(cnt > maxCNT){
            maxN = n;
            maxCNT = cnt;
        }
    }

    std::cout << maxN << std::endl;

    return 0;
}
