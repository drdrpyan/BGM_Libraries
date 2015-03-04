#ifndef BGM_DATA_TREENODE_H
#define BGM_DATA_TREENODE_H

#include "wrapper.h"

namespace BGM
{
namespace DATA
{

template<class T>
class TreeNode : public Wrapper<T>
{
 public:
  explicit TreeNode(const T &data) : Wrapper<T>(data) { }
  virtual ~TreeNode() { }
  virtual const TreeNode<T>* child(unsigned int idx) const = 0;
  virtual TreeNode<T>* child(unsigned int idx) {
    return const_cast<TreeNode<T>*>(static_cast<const TreeNode<T>*>(this)->child(idx));
  }
  virtual void set_child(unsigned int idx, const void *child_node) = 0;
};

}
}
#endif
