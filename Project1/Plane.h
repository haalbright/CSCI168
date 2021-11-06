#ifndef _PLANE_H_
#define _PLANE_H_

// GL
#include "GLInclude.h"

// Engine
#include "Collision.h"
#include "Material.h"
#include "Object.h"

////////////////////////////////////////////////////////////////////////////////
/// @brief Plane
////////////////////////////////////////////////////////////////////////////////
// class Plane : public Object {
//
//
//
//
// };
class Plane : public Object {
  public:
    glm::vec3 position, normal;
    Plane(const glm::vec3& p, const glm::vec3& n): position{p}, normal{n} {}
    Collision collide(const Ray& _ray) const override;
    void printFunc(){}
  private:
};

#endif
