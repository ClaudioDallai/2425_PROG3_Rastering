#pragma once
#include "Maths.h"
#include <cmath>

class Camera {
public:
    Camera(int screen_witdh, int screen_height, float fov);
    Vector2i world_to_screen_space(Vector3f world_point);
    Vector3f world_to_camera_space(const Vector3f& world_point) const;
private:
    Vector3f _position;
    int _screen_width;
    int _screen_height;
    float _fov;
};
