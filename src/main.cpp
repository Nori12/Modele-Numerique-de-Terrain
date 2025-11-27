#include "vibes.h"

int main(int argc, char* argv[]) {

    vibes::beginDrawing();
    vibes::newFigure("Maze");

    vibes::axisLimits(0-0.5, 4+0.5, 0-0.5, 4+0.5);
    vibes::endDrawing();

    return 0;
}