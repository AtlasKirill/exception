#include "test.cpp"
using std::cout; using std::endl;

int main() {
    try {
        test();
    } catch (except::Exception &e){
        std::cout<<e.what()<<std::endl;
    }


    return 0;
}

