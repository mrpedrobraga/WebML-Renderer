#include "glm/glm.hpp"

struct Window {
    glm::uvec2 size;
    char title[0xFF];
};

struct AABB {
    glm::vec2 position;
    glm::uvec2 size;

    bool intersects(AABB other);
    bool intersects(glm::vec2 point);
};