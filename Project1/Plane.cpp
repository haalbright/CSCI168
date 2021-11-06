#include <iostream>//stringstream
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "Sphere.h"
#include "GLInclude.h"
#include "Plane.h"
#include "Object.h"
Collision Plane::collide(const Ray& _ray) const {
  return Collision();
}

void Plane::printFunc(){
  std::cout<<"--Plane Object--"<<std::endl;
  std::cout<<"Position: ("<<position[0]<<", "<<position[1]<<", "<<position[2]<<")"<<std::endl;
  std::cout<<"Normal: ("<<normal[0]<<", "<<normal[1]<<", "<<normal[2]<<")"<<std::endl;
  std::cout<<std::endl;
  std::cout<<std::endl;
}
