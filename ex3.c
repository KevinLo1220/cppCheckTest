#include <iostream>

int main() {
  int i, *p;

  i = 0;
  p = new int;
  if(!p) {
    std::cout << "failed to malloc p" << std::endl;
    /* should return here! */
  }
  *p = i;
  /* should delete p here! */
  return 0;
}


