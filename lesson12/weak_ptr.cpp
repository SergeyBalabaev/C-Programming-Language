#include <memory>
#include <iostream>

using namespace std;
  typedef struct node {
  uint16_t value;
  std::weak_ptr<node> ptr;
} Node;

int main() {
  shared_ptr<Node> a = shared_ptr<Node>(new Node);
  shared_ptr<Node> b = shared_ptr<Node>(new Node);
  shared_ptr<Node> c = shared_ptr<Node>(new Node);
  a->ptr = b;
  b->ptr = c;
  c->ptr = a;
  return 0;
}
