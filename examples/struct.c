#include <stdio.h>

struct Player {
    char name[32];
    int health;
    int x, y;
    int is_alive;
};

int main() {
    struct Player p = {"Hero", 100, 10, 20, 1};
    
    printf("Name: %s\n", p.name);
    printf("Health: %d\n", p.health);
    printf("Position: (%d, %d)\n", p.x, p.y);
    
    return 0;
}
