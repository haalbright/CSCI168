#ifndef _SHADOW_H_
#define _SHADOW_H_
#include "GLInclude.h"
#include "Object.h"
#include "Light.h"
#include "Collision.h"
#include "Ray.h"
#include "Light.h"

class Shadow
{
  public:
   ads_phong_lighting(const glm::vec3& r, const glm::vec3& c): ray{r}, collision{c}{}
   glm::vec4 ray(){return ray;} glm::vec4 collision(){return collision;}
  private:
   glm::vec4 ray, collision;
   
};

#endif
