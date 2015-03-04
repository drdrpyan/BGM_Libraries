#ifndef BGM_DATA_TREE_H
#define BGM_DATA_TREE_H

#include "tree_node.h"
#include <iterator>

namespace BGM
{
namespace DATA
{

template <class T, class TreeNodeType=TreeNode<T> >
class Tree
{
  public:
    Tree() : root(nullptr) { }
    explicit Tree(TreeNodeType *root_node)
        : root(static_cast<TreeNodeType*>(root_node)) { }
    virtual ~Tree() { }
//    class iterator : public std::iterator<std::input

  private:
    TreeNodeType *root;
};

}
}
#endif
