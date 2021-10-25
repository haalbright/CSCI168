#ifndef _CAMERA_H_
#define _CAMERA_H_

// GL
#include "GLInclude.h"

// Engine
#include "Collision.h"
#include "Material.h"
#include "Object.h"

class Camera{
public:
  Camera();
  const glm::vec3& eye() {return m_Eye;}
private:
  glm::vec3 m_Eye;
};

#endif
