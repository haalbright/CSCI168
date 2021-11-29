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
     Shadow(); Ray(); Collision();
 // std::vector<Object*>mObjects;
 
private:
     glm::vec3 position;

};

#endif
