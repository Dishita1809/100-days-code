//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};
int main() {
    enum TrafficLight light;
    for(light = RED; light <= GREEN; light++) {
        printf("Light %d: %s\n", light, 
            (light == RED) ? "Stop" :
            (light == YELLOW) ? "Wait" :
            "Go");
    }
    return 0;
}
