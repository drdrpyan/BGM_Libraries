#ifndef BGM_DATA_NARYTREENODE_H
#define BGM_DATA_NARYTREENODE_H

#include "tree_node.h"

namespace BGM
{
namespace DATA
{

template <class T, unsigned int num_of_child>
class NAryTreeNode : public TreeNode<T>
{
 public:
  virtual ~NAryTreeNode() {
    delete[] child_;
  }
  NAryTreeNode(const T *data) : Wrapper(data) {
    memset(child_, static_cast<int>(nullptr), num_of_child);
  }
  virtual const NAryTreeNode<T, num_of_child>* child(unsigned int idx) const {
    assert(idx >= num_of_child);
    return child_[idx];
  }
  virtual NAryTreeNode<T, num_of_child> child(unsigned int idx) const {
    return const_cast<T&>(static_cast<const NAryTreeNode<T,
			              num_of_child>*>(this)->child(idx));
  }
  virtual void set_child(unsigned int idx,
		                 const NAryTreeNode<T, num_of_child> *child) {
    assert(idx >= num_of_child);
    child_[idx] = const_cast<NAryTreeNode*>(child);
  }

 private:
  NAryTreeNode *child_[num_of_child];
};

}
}




#endif
