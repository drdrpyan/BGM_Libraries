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
    virtual int read(std::istream stream) = 0;
    virtual int read(FILE *stream) = 0;
    virtual int write(std::ostream stream) = 0;
    virtual int write(FILE *stream) = 0;
};

}
}
#endif
