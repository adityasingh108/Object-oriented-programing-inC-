// You should define Pair here:
// (Use as many lines as you need!)
// ...
// ...
#include<iostream>
class pair{
  public:
  int a;
  int b;
  int sum(){
    int retval = a+b;
    return retval;
  }
};
// This main() function will help you test your work.
// Click Run to see what happens.
// When you're sure you're finished, click Submit for grading
// with our additional hidden tests.
int main() {
  pair p;
  p.a = 100;
  p.b = 200;
  if (p.a + p.b == p.sum()) {
    std::cout << "Success!" << std::endl;
  } else {
    std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
  }
  return 0;
}
