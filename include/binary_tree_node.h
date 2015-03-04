#ifndef BGM_DATA_BINARYTREENODE_H
#define BGM_DATA_BINARYTREENODE_H

#include "n-ary_tree_node.h"

namespace BGM
{
namespace DATA
{

template <class T>
class BinaryTreeNode : public NAryTreeNode<T, 2>
{
  public:
	explicit BinaryTreeNode(const T &data) : NAryTreeNode<T, 2>(data) { }
	virtual ~BinaryTreeNode() { }
    virtual const BinaryTreeNode<T>* left_child() const {
      return static_cast<const BinaryTreeNode<T>*>(
                 NAryTreeNode<T, 2>::child(0));
    }
    virtual BinaryTreeNode<T>* left_child() {
      return const_cast<BinaryTreeNode<T>*>(
                 static_cast<const BinaryTreeNode<T>*>(this)->left_child());
    }
    virtual const BinaryTreeNode<T>* right_child() const {
      return static_cast<const BinaryTreeNode<T>*>(
                 NAryTreeNode<T, 2>::child(1));
    }
    virtual BinaryTreeNode<T>* rightChild() {
      return const_cast<BinaryTreeNode<T>*>(
                 static_cast<const BinaryTreeNode<T>*>(this)->right_child());
    }
    virtual void set_left_child(const BinaryTreeNode<T> *left_child) {
      NAryTreeNode<T, 2>::set_child(0, left_child);
    }
    virtual void set_right_child(const BinaryTreeNode<T> *right_child) {
      NAryTreeNode<T, 2>::set_child(1, right_child);
    }
};

}
}

#endif
