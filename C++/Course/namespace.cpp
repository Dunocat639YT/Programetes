#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){

    /*Namespace = provides a solution for preventing name conflicts
                  in large projects. Each entinty needs a unique name.
                  A namespace allows for identically named entities
                  as long as the namespaces are different
    */

    using namespace first;

    int x = 0;

    std::cout << second::x;

    return 0;
}