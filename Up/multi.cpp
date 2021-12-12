#include <iostream>

class Size {
 public:
  Size(int _x, int _y, int _z);

  int get_x() { return x; }
  int get_y() { return y; }
  int get_z() { return z; }

  void set_x(int _x) { x = _x; }
  void set_x(int _y) { x = _y; }
  void set_x(int _z) { x = _z; }

 private:
  int x, y, z;
};
class to {};

class Room : private Size, public to {
 public:
 private:
};

Size::Size(int _x, int _y, int _z) : x(_x), y(_y), z(_z) {}