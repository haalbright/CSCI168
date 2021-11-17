#include "RayTracer.h"

void RayTracer::clear() const {}

//variables we will need:
//screen hight and width:
int height = g_height;
int width = g_width;

void RayTracer::render(const Scene& _scene) const 
{
  // for each column i do
  //   for each row j do
  //     generate a ray origin and direction
  //
  //     find the first intersection point of the ray
  //
  //     shade the ray intersection
  //
  // Copy framebuffer to screne
  
  //looping over all the pixels on the screen
  for (int j = 0; j < height; ++j)
  {
	  for (int i = 0; i < width; ++i)
	  {
		  //generating a ray origin and direction
		  glm::vec3 origin;
		  glm::vec3 direction;
		  
		  float t = INFINITY;//closest point of intersection
		  //finding the first intersection point of the ray
		  if(object.intersect(origin, direction, t) && t > 0)
		  {
			  glm::vec3 hitPoint = origin + direction * t;
			  glColor3f(0.3,0.3,0.3);//shading the ray intersection
		  }
		  
	  }
  }
  //copy framebuffer to scene
}
