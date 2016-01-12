#include <iostream>
using namespace std;
int main() {
  int i, *p;
  int karray[10]={9};
  i = 0;
  p = new int;
  if(!p) {
    std::cout << "failed to malloc p" << std::endl;
    /* should return here! */
  }
  *p = i;
  /* should delete p here! */

  for(i=0;i<11;i++){
    std::cout << karray[i] << endl;
  }
  return 0;
}


