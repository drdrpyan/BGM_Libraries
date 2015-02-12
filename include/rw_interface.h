//author : BGM
//date : 2014-02-01
//RWInterface : 데이터 객체를 파일에 입/출력하는 인터페이스

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

  virtual int read(std::istream stream) = 0;  //스트림에서 객체를 읽어들인다. 읽어들인 바이트를 반환
  virtual int read(FILE *stream) = 0;
  virtual int write(std::ostream stream) = 0; //스트림에 객체를 쓴다. 쓴 바이트를 반환
  virtual int write(FILE *stream) = 0;
};

}
}

#endif
