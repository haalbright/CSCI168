#ifndef _LIGHT_H_
#define _LIGHT_H_

// GL
#include "GLInclude.h"

// Engine
#include "Collision.h"
#include "Material.h"
#include "Object.h"

class Light{
public:
  Light()=default;
  Light(glm::vec4 viA, glm::vec4 viD, glm::vec4 viS, int lType, glm::vec3 lPosition): iD{viD}, iS{viS}, iA{viA}, position{lPosition}, type(lType){}
  //Light():mLights(nullptr){};
  virtual ~Light() = default;
  //std::vector<Light*> mLights;
  //glm::vec4 getA(): {}
  void printFunc(){}
private:
  glm::vec4 iD;
  glm::vec4 iS;
  glm::vec4 iA;
  int type;
  glm::vec3 position;
};

#endif
