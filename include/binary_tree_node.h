#ifndef BGM_DATA_BINARYTREENODE_H
#define BGM_DATA_BINARYTREENODE_H

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
    virtual const BinaryTreeNode* left_child() const {
      return static_cast<const BinaryTreeNode*>(child(0));
    }
    virtual BinaryTreeNode* left_child() const {
      return const_cast<BinaryTreeNode*>(
                 static_cast<const BinaryTreeNode*>(this)->left_child());
    }
    virtual const BinaryTreeNode* right_child() const {
      return static_cast<const BinaryTreeNode*>(child(1));
    }
    virtual BinaryTreeNode* rightChild() const {
      return const_cast<BinaryTreeNode*>(
                 static_cast<const BinaryTreeNode*>(this)->right_child());
    }
    virtual void set_left_child(const BinaryTreeNode *left_child) {
      set_child(0, left_child);
    }
    virtual void set_right_child(const BinaryTreeNode *right_child) {
      set_child(1, right_child);
    }
};

}
}

#endif
