//author : BGM
//date : 2014-02-01
//RWInterface : ������ ��ü�� ���Ͽ� ��/����ϴ� �������̽�

#ifndef BGM_IO_RWINTERFACE_H
#define BGM_IO_RWINTERFACE_H

#include <istream>

namespace BGM
{
namespace IO
{

class RWInterface {
 public:
  virtual ~RWInterface() {}

  virtual int read(std::istream stream) = 0;  //��Ʈ������ ��ü�� �о���δ�. �о���� ����Ʈ�� ��ȯ
  virtual int read(FILE *stream) = 0;
  virtual int write(std::ostream stream) = 0; //��Ʈ���� ��ü�� ����. �� ����Ʈ�� ��ȯ
  virtual int write(FILE *stream) = 0;
};

}
}

#endif
