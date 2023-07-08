#include "browser.h"

bool AABB::intersects (AABB other) {
    return !(
        position.x > other.position.x + other.size.x ||
        position.y > other.position.y + other.size.y ||
        position.x + size.x < other.position.x ||
        position.y + size.y < other.position.y
    );
}

bool AABB::intersects(glm::vec2 point) {
    return !(
        point.x > position.x + size.x ||
        point.y > position.y + size.y ||
        point.x < position.x ||
        point.y < position.y
    );
}