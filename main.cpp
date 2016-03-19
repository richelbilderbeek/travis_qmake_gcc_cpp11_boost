#include <boost/graph/adjacency_list.hpp>

int f() noexcept {
  boost::adjacency_list<> g;
  boost::add_vertex(g);
  return boost::num_vertices(g);
}

int main() {
  if (f() != 1) return 1;
}
