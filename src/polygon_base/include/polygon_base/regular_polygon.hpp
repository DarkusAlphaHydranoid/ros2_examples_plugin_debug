#ifndef POLYGON_BASE_REGULAR_POLYGON_HPP
#define POLYGON_BASE_REGULAR_POLYGON_HPP

#include <iostream>
// #include <vector>

namespace polygon_base
{
  class RegularPolygon
  {
    public:
      virtual void initialize(double side_length) = 0;
      virtual double area() = 0;
      virtual ~RegularPolygon(){
	      std::cout << "~RegularPolygon() is running!" << std::endl;
      }

    protected:
      RegularPolygon(){
	#if 0
	int myLeen = 0; // 100000;
      	for (int i = 0; i < myLeen; i++) {
		marray_.push_back(i);
	}
	#endif
      }
  
    private:
      // std::vector<int> marray_;
  };
}  // namespace polygon_base

#endif  // POLYGON_BASE_REGULAR_POLYGON_HPP
