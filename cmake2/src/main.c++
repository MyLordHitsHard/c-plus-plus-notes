#include "lib.h"


int main(int argc, char* argv[]) {
    Lib* lib = new Lib();
    lib -> print();
    delete lib;
    return 0;
}