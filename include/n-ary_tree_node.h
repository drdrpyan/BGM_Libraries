#ifndef BGM_DATA_NARYTREENODE_H
#define BGM_DATA_NARYTREENODE_H

#include "tree_node.h"
#include <cassert>

namespace BGM
{
namespace DATA
{

template <class T, unsigned int num_of_child>
class NAryTreeNode : public TreeNode<T>
{
  public:
    NAryTreeNode(const T &data) : TreeNode<T>(data) {
      for(unsigned int i=0; i<num_of_child; i++)
        child_[i] = nullptr;
    }
    virtual ~NAryTreeNode() {
      for(unsigned int i=0; i<num_of_child; i++)
        delete child_[i];
    }

    virtual const NAryTreeNode<T, num_of_child>* child(unsigned int idx) const {
      assert(idx >= num_of_child);
      return child_[idx];
    }
    virtual NAryTreeNode<T, num_of_child>* child(unsigned int idx) {
      return const_cast<NAryTreeNode<T, num_of_child>*>(
          static_cast<const NAryTreeNode<T, num_of_child>*>(this)->child(idx));
    }
    virtual void set_child(unsigned int idx, const void *child_node) {
      assert(idx >= num_of_child);
      child_[idx] = static_cast<NAryTreeNode<T, num_of_child>*>(
                        const_cast<void*>(child_node));
    }

  private:
    NAryTreeNode<T, num_of_child> *child_[num_of_child];
};

}
}




#endif
