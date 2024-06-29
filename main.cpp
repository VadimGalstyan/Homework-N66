#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec = {1,2,3,4,5,6,7,8,9,};

    vec.erase(std::remove_if(vec.begin(),vec.end(),[](int n){return n % 2 == 1;}),   vec.end());

    for(auto it : vec)
    {
        std::cout<<it<<" ";
    }

    return 0;
}