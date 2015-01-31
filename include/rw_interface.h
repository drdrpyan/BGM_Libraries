#ifndef BGM_IO_RWINTERFACE_H
#define BGM_IO_RWINTERFACE_H

#include <istream>

namespace BGM
{
namespace IO
{

class RWInterface {
  public:
    virtual int read(std::istream in_stream) = 0;
    virtual int read(FILE *file) = 0;
    virtual int write(std::ostream out_stream) = 0;
    virtual int write(FILE *file) = 0;
};

}
}
#endif
