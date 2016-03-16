#include <boost/graph/adjacency_list.hpp>

int main() {
  boost::adjacency_list<> g;
  boost::add_vertex(g);
  if (boost::num_vertices(g) != 1) return 1;
}
