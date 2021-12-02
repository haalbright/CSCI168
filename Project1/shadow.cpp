#include <iostream>
#include <fstream>
#include <vector>
#include "GLInclude.h"
#include "Light.h"
#include "Object.h" 
#include "Light.h"
#include "Sphere.h"

 // generate ray
 // if ray collides is true 
 //produce shadow ambient 
 //else 
 //prduce ADS lighting 

vec3 ads_phong_lighting(Ray r, Collision c) 
{ 
    // Compute the ambient contribution from the ambient and positional lights
    vec4 ambient = worldAmb_ambient + pointLight_ambient * objMat_ambient;

    // initialize diffuse and specular contributions
    vec4 diffuse = vec4(0.0); vec4 specular = vec4(0.0);

    // Check to see if any object is casting a shadow on this surface
    Ray light_ray;
    light_ray.start = c.p + c.n * 0.01;
    light_ray.dir = normalize(pointLight_position - c.p); bool in_shadow = false;

    // Cast the ray against the scene
    Collision c_shadow = get_closest_collision(light_ray);

    // If the ray hit an object and if the hit occurred between the surface and the light
    if (c_shadow.object_index != -1 && c_shadow.t < length(pointLight_position – c.p)) 
        { 
            in_shadow = true;
        }

        // If this surface is in shadow, don't add diffuse and specular components
    if (in_shadow == false){ 

    // Compute the light's reflection on the surface
    vec3 light_dir = normalize(pointLight_position - c.p); vec3 light_ref = normalize( reflect(-light_dir, c.n)); float cos_theta = dot(light_dir, c.n);
    float cos_phi = dot( normalize(-r.dir), light_ref);

    // Compute the diffuse and specular contributions
    diffuse = pointLight_diffuse * objMat_diffuse * max(cos_theta, 0.0);
    specular = pointLight_specular * objMat_specular * pow( max( cos_phi, 0.0), objMat_shininess); }
    vec4 phong_color = ambient + diffuse + specular;
    return phong_color.rgb; 
}


