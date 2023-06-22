void drawRays(void) {
    double rayAngle;
    double rayDistance;
    Vector2D rayDirection;
    Vector2D rayStep;
    Vector2D mapHit;

    rayAngle = playerAngle - FOV_ANGLE / 2;

    for (int i = 0; i < NUM_RAYS; i++) {
        rayDirection.x = cos(rayAngle);
        rayDirection.y = sin(rayAngle);

        rayStep.x = sqrt(1 + (rayDirection.y * rayDirection.y) / (rayDirection.x * rayDirection.x));
        rayStep.y = sqrt(1 + (rayDirection.x * rayDirection.x) / (rayDirection.y * rayDirection.y));

        if (rayDirection.x < 0) {
            rayStep.x = -rayStep.x;
        }

        if (rayDirection.y < 0) {
            rayStep.y = -rayStep.y;
        }

        mapHit.x = playerX;
        mapHit.y = player
