#include <hekate/hekate>
#include <iostream>

using namespace hekate;
using namespace std;

int main(int argc, char **argv) { 
  cli argline;
  argline << param<type::string>("Simple parameters");

  return argline(argc, argv);
}
