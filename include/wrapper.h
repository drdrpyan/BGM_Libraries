#ifndef BGM_DATA_WRAPPER_H
#define BGM_DATA_WRAPPER_H

namespace BGM
{
namespace DATA
{

template <class T, class Alloc=std::allocator<T> >
class Wrapper
{
 public:
  explicit Wrapper(const T &data) : data_(data) { }
  virtual ~Wrapper() { };
  const T& data() const {
    return data_;
  }
  T& data() {
    return const_cast<T&>(static_cast<const Wrapper*>(this)->data());
  }

 private:
  Wrapper(const Wrapper<T> &wrapper);
  const Wrapper& operator=(const Wrapper<T> &wrapper);
  T data_;
};

}
}


#endif
