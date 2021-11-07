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
    Scene(){};
    //~Scene();
    //Scene(const Camera aCam, std::vector<Object*> objectV, const std::vector<Light*> lightsV)
    void readFromFile(const std::string& filename);
    Collision firstIntersection(const Ray& _ray);
    glm::vec3 parseVec3(const std::string& vecLine);
    void printFunc();
    std::vector<Object*> getObjects(){return mObjects;}
    std::vector<Light*> getLights(){return mLights;}
  private:
    std::vector<Object*> mObjects;
    std::vector<Light*> mLights;
};

#endif
