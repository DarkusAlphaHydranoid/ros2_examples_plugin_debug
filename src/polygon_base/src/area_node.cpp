#include <pluginlib/class_loader.hpp>
#include <polygon_base/regular_polygon.hpp>

#include <iostream>

int main(int argc, char** argv)
{
  // To avoid unused parameter warnings
  (void) argc;
  (void) argv;

  std::shared_ptr<pluginlib::ClassLoader<polygon_base::RegularPolygon>> poly_loader 
	  = std::make_shared<pluginlib::ClassLoader<polygon_base::RegularPolygon>>("polygon_base", "polygon_base::RegularPolygon");

  std::unique_ptr<polygon_base::RegularPolygon> triangle 
	  = std::unique_ptr<polygon_base::RegularPolygon>(poly_loader->createUnmanagedInstance("polygon_plugins::Triangle"));

  poly_loader.reset();

  return 0;
}
