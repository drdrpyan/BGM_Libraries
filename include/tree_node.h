#ifndef BGM_DATA_TREENODE_H
#define BGM_DATA_TREENODE_H

namespace BGM
{
namespace DATA
{

template<class T>
class TreeNode : public Wrapper<T>
{
 public:
  explicit TreeNode(const T &data) : Wrapper(data) { }
  virtual ~TreeNode();
  virtual const TreeNode<T>* child(unsigned int idx)=0;
  virtual TreeNode<T>* child(unsigned int idx)=0;
  virtual void set_child(unsigned int idx, const TreeNode<T> *child)=0;
	//�Լ� ���߿� ������ ��
};

}
}
#endif
