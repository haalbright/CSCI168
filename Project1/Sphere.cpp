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
  std::cout<<"--Sphere Object--"<<std::endl;
  std::cout<<"Center:("<<m_center[0]<<", "<<m_center[1]<<", "<<m_center[2]<<")"<<std::endl;
  std::cout<<"Radius: "<<m_radius<<std::endl;
  std::cout<<"--Sphere Material-- "<<std::endl;
  std::cout<<"kD: {"<<m_material.kD[0]<<", "<<m_material.kD[1]<<", "<<m_material.kD[2]<<", "<<m_material.kD[3]<<"}"<<std::endl;
  std::cout<<"kA: {"<<m_material.kA[0]<<", "<<m_material.kA[1]<<", "<<m_material.kA[2]<<", "<<m_material.kA[3]<<"}"<<std::endl;
  std::cout<<"kS: {"<<m_material.kS[0]<<", "<<m_material.kS[1]<<", "<<m_material.kS[2]<<", "<<m_material.kS[3]<<"}"<<std::endl;
  std::cout<<"kA: {"<<m_material.kA[0]<<", "<<m_material.kA[1]<<", "<<m_material.kA[2]<<", "<<m_material.kA[3]<<"}"<<std::endl;
  std::cout<<"kA: {"<<m_material.kA[0]<<", "<<m_material.kA[1]<<", "<<m_material.kA[2]<<", "<<m_material.kA[3]<<"}"<<std::endl;
  std::cout<<"Rho: "<<m_material.rho<<std::endl;
  std::cout<<std::endl;
  std::cout<<std::endl;
}
