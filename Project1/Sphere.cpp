#include <iostream>//stringstream
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "Sphere.h"
#include "GLInclude.h"
#include "Object.h"
Collision Sphere::collide(const Ray& _ray) const {
  return Collision();
}

void Sphere::printFunc(){
  std::cout<<m_radius<<std::endl;
}
