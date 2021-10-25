#ifndef _SCENE_H_
#define _SCENE_H_
#include <iostream>//stringstream
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "Collision.h"
#include "Ray.h"
#include "Light.h"
#include <stdlib.h>
#include "GLInclude.h"
#include "Camera.h"
#include "Sphere.h"


class Scene {
  public:
    void readFromFile(const std::string& filename);
    Collision firstIntersection(const Ray& _ray);
    glm::vec3 parseVec3(const std::string& vecLine);
  private:
    Camera mCam;
    std::vector<Object*> mObjects;
    std::vector<Light*> mLights;
};

  //glm::vec3  m_center;
  glm::vec3 Scene::parseVec3(const std::string& vecLine){ //input should be a number, space, a number, space, a number to get the correct output
    int firstSpace=vecLine.find(" ");
    int lastSpace=vecLine.rfind(" ");
    std::string firstS=vecLine.substr(0,firstSpace-1);
    std::string secondS=vecLine.substr(firstSpace+1,lastSpace-1);
    std::string thirdS=vecLine.substr(lastSpace+1);

    std::stringstream convert1(firstS);
    std::stringstream convert2(secondS);
    std::stringstream convert3(thirdS);
    // if(vecLine.size==5){ //if the numbers in strings are integers, convert them
    //     int firstInt,secondInt,thirdInt=0;
    //     convert1>>firstInt;
    //     convert2>>secondInt;
    //     convert3>>thirdInt;
    // }
    int firstInt,secondInt,thirdInt=0;
    convert1>>firstInt;
    convert2>>secondInt;
    convert3>>thirdInt;
    return glm::vec3(firstInt,secondInt,thirdInt);
  }

void Scene::readFromFile(const std::string& filename){
  std::string line;
  std::ifstream myfile(filename);
  if (myfile.is_open()){
    while(getline(myfile,line)){
      std::string objectName=line.substr(0,line.find(" ")-1);
      if(objectName=="Sphere"){
        int radiusP=line.find("Radius");
        std::string center=line.substr(line.find("Center")+7, radiusP-2);//assuming center is defined before the radius
        glm::vec3 vCenter=parseVec3(center);
        float radius=stof(line.substr(radiusP+7));
        Sphere(vCenter, radius);

      }
      else if(objectName=="Plane"){

      }
      else if(objectName=="PointLight"){

      }
      else{
        std::cout<<"ERROR: Unknown Object Type: "<<objectName<<std::endl;
      }
    }
    myfile.close();
  }
  else{
    std::cout<<"File can't be opened"<<std::endl;
  }
}

#endif
