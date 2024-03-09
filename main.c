#include <stdio.h>
#include <math.h>

// Functions for area and perimeter calculation
float calculateSquareArea(float side);
float calculateSquarePerimeter(float side);
float calculateRectangleArea(float length, float width);
float calculateRectanglePerimeter(float length, float width);
float calculateTriangleArea(float base, float height);
float calculateTrianglePerimeter(float side1, float side2, float side3);
float calculateCircleArea(float radius);
float calculateCirclePerimeter(float radius);
float calculateTrapezoidArea(float base1, float base2, float height);
float calculateTrapezoidPerimeter(float side1, float side2, float base1, float base2);
float calculateParallelogramArea(float base, float height);
float calculateParallelogramPerimeter(float side1, float side2);

// Functions for volume calculation
float calculateCubeVolume(float side);
float calculateCuboidVolume(float length, float width, float height);
float calculateConeVolume(float radius, float height);
float calculateCylinderVolume(float radius, float height);
float calculateSphereVolume(float radius);
float calculatePyramidVolume(float baseArea, float height);


void printDottedLine(int length) {
    for (int i = 0; i < length; i++) {
        printf(".");
    }
    printf("\n");
}




int main() {

    printf("Welcome to perimeter, area, and volume finder.\n");
    printDottedLine(40);
    printf("You can choose number 1 to calculate the perimeter of plane figure.\n");
    printf("You can choose number 2 to calculate the area of plane figure.\n");
    printf("You can choose number 3 to calculate the volume of solid figure.\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);



    switch(choice) {

        case 1: // Perimeter calculation
            printf("\nChoose the plane figure for perimeter calculation:\n");
            printf("1. Square\n");
            printf("2. Rectangle\n");
            printf("3. Triangle\n");
            printf("4. Circle\n");
            printf("5. Trapezoid\n");
            printf("6. Parallelogram\n");

            printf("\nChosen plane figure: ");
            scanf("%d", &choice);

            switch(choice) {
                case 1: // Square
                    printf("Enter the side length of the square:\n");
                    float side;
                    scanf("%f", &side);
                    printf("Perimeter of the square: %.2f\n", calculateSquarePerimeter(side));
                    break;
                case 2: // Rectangle
                    printf("Enter the length and width of the rectangle:\n");
                    float length, width;
                    scanf("%f %f", &length, &width);
                    printf("Perimeter of the rectangle: %.2f\n", calculateRectanglePerimeter(length, width));
                    break;
                case 3: // Triangle
                    printf("Enter the lengths of the three sides of the triangle:\n");
                    float side1, side2, side3;
                    scanf("%f %f %f", &side1, &side2, &side3);
                    printf("Perimeter of the triangle: %.2f\n", calculateTrianglePerimeter(side1, side2, side3));
                    break;
                case 4: // Circle
                    printf("Enter the radius of the circle:\n");
                    float radius;
                    scanf("%f", &radius);
                    printf("Perimeter of the circle: %.2f\n", calculateCirclePerimeter(radius));
                    break;
                case 5: // Trapezoid
                    printf("Enter the lengths of the four sides of the trapezoid:\n");
                    float trapezoidSide1, trapezoidSide2, trapezoidBase1, trapezoidBase2;
                    scanf("%f %f %f %f", &trapezoidSide1, &trapezoidSide2, &trapezoidBase1, &trapezoidBase2);
                    printf("Perimeter of the trapezoid: %.2f\n", calculateTrapezoidPerimeter(trapezoidSide1, trapezoidSide2, trapezoidBase1, trapezoidBase2));
                    break;
                case 6: // Parallelogram
                    printf("Enter the lengths of the two adjacent sides of the parallelogram:\n");
                    float parallelogramSide1, parallelogramSide2;
                    scanf("%f %f", &parallelogramSide1, &parallelogramSide2);
                    printf("Perimeter of the parallelogram: %.2f\n", calculateParallelogramPerimeter(parallelogramSide1, parallelogramSide2));
                    break;
                default:
                    printf("Invalid choice!\n");
            }
            break;

        case 2: // Area calculation
            printf("\nChoose the plane figure for area calculation:\n");
            printf("1. Square\n");
            printf("2. Rectangle\n");
            printf("3. Triangle\n");
            printf("4. Circle\n");
            printf("5. Trapezoid\n");
            printf("6. Parallelogram\n");

            printf("\nChosen plane figure: ");
            scanf("%d", &choice);

            switch(choice) {
                case 1: // Square
                    printf("Enter the side length of the square:\n");
                    float side;
                    scanf("%f", &side);
                    printf("Area of the square: %.2f\n", calculateSquareArea(side));
                    break;
                case 2: // Rectangle
                    printf("Enter the length and width of the rectangle:\n");
                    float length, width;
                    scanf("%f %f", &length, &width);
                    printf("Area of the rectangle: %.2f\n", calculateRectangleArea(length, width));
                    break;
                case 3: // Triangle
                    printf("Enter the base and height of the triangle:\n");
                    float base, height;
                    scanf("%f %f", &base, &height);
                    printf("Area of the triangle: %.2f\n", calculateTriangleArea(base, height));
                    break;
                case 4: // Circle
                    printf("Enter the radius of the circle:\n");
                    float radius;
                    scanf("%f", &radius);
                    printf("Area of the circle: %.2f\n", calculateCircleArea(radius));
                    break;
                case 5: // Trapezoid
                    printf("Enter the two bases and height of the trapezoid:\n");
                    float base1, base2, trapezoidHeight;
                    scanf("%f %f %f", &base1, &base2, &trapezoidHeight);
                    printf("Area of the trapezoid: %.2f\n", calculateTrapezoidArea(base1, base2, trapezoidHeight));
                    break;
                case 6: // Parallelogram
                    printf("Enter the base and height of the parallelogram:\n");
                    float parallelogramBase, parallelogramHeight;
                    scanf("%f %f", &parallelogramBase, &parallelogramHeight);
                    printf("Area of the parallelogram: %.2f\n", calculateParallelogramArea(parallelogramBase, parallelogramHeight));
                    break;
                default:
                    printf("Invalid choice!\n");

            }
            break;

        case 3: // Volume calculation
            printf("\nChoose the solid figure for volume calculation:\n");
            printf("1. Cube\n");
            printf("2. Cuboid\n");
            printf("3. Cone\n");
            printf("4. Cylinder\n");
            printf("5. Sphere\n");
            printf("6. Pyramid\n");

            printf("\nChosen solid figure: ");
            scanf("%d", &choice);

            switch(choice) {
                case 1: // Cube
                    printf("Enter the side length of the cube:\n");
                    float cubeSide;
                    scanf("%f", &cubeSide);
                    printf("Volume of the cube: %.2f\n", calculateCubeVolume(cubeSide));
                    break;
                case 2: // Cuboid
                    printf("Enter the length, width, and height of the cuboid:\n");
                    float cuboidLength, cuboidWidth, cuboidHeight;
                    scanf("%f %f %f", &cuboidLength, &cuboidWidth, &cuboidHeight);
                    printf("Volume of the cuboid: %.2f\n", calculateCuboidVolume(cuboidLength, cuboidWidth, cuboidHeight));
                    break;
                case 3: // Cone
                    printf("Enter the radius and height of the cone:\n");
                    float coneRadius, coneHeight;
                    scanf("%f %f", &coneRadius, &coneHeight);
                    printf("Volume of the cone: %.2f\n", calculateConeVolume(coneRadius, coneHeight));
                    break;
                case 4: // Cylinder
                    printf("Enter the radius and height of the cylinder:\n");
                    float cylinderRadius, cylinderHeight;
                    scanf("%f %f", &cylinderRadius, &cylinderHeight);
                    printf("Volume of the cylinder: %.2f\n", calculateCylinderVolume(cylinderRadius, cylinderHeight));
                    break;
                case 5: // Sphere
                    printf("Enter the radius of the sphere:\n");
                    float sphereRadius;
                    scanf("%f", &sphereRadius);
                    printf("Volume of the sphere: %.2f\n", calculateSphereVolume(sphereRadius));
                    break;
                case 6: // Pyramid
                    printf("Enter the base area and height of the pyramid:\n");
                    float pyramidBaseArea, pyramidHeight;
                    scanf("%f %f", &pyramidBaseArea, &pyramidHeight);
                    printf("Volume of the pyramid: %.2f\n", calculatePyramidVolume(pyramidBaseArea, pyramidHeight));
                    break;
                default:
                    printf("Invalid choice!\n");
            }

            break;
        default:
            printf("Invalid choice!\n");
    }


    return 0;
}




float calculateSquareArea(float side) {
    return side * side; // Area of square
}

float calculateSquarePerimeter(float side) {
    return 4 * side; // Perimeter of square
}

float calculateRectangleArea(float length, float width) {
    return length * width; // Area of rectangle
}

float calculateRectanglePerimeter(float length, float width) {
    return 2 * (length + width); // Perimeter of rectangle
}

float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height; // Area of triangle
}

float calculateTrianglePerimeter(float side1, float side2, float side3) {
    return side1 + side2 + side3; // Perimeter of triangle
}

float calculateCircleArea(float radius) {
    return M_PI * radius * radius; // Area of circle
}

float calculateCirclePerimeter(float radius) {
    return 2 * M_PI * radius; // Perimeter of circle
}

float calculateTrapezoidArea(float base1, float base2, float height) {
    return 0.5 * (base1 + base2) * height; // Area of trapezoid
}

float calculateTrapezoidPerimeter(float side1, float side2, float base1, float base2) {
    return side1 + side2 + base1 + base2; // Perimeter of trapezoid
}

float calculateParallelogramArea(float base, float height) {
    return base * height; // Area of parallelogram
}

float calculateParallelogramPerimeter(float side1, float side2) {
    return 2 * (side1 + side2); // Perimeter of parallelogram
}


// Function definitions for volume calculation
float calculateCubeVolume(float side) {
    return side * side * side; // Volume of cube
}

float calculateCuboidVolume(float length, float width, float height) {
    return length * width * height; // Volume of cuboid
}

float calculateConeVolume(float radius, float height) {
    return M_PI * radius * radius * height / 3.0; // Volume of cone
}

float calculateCylinderVolume(float radius, float height) {
    return M_PI * radius * radius * height; // Volume of cylinder
}

float calculateSphereVolume(float radius) {
    return 4.0 / 3.0 * M_PI * radius * radius * radius; // Volume of sphere
}

float calculatePyramidVolume(float baseArea, float height) {
    return baseArea * height / 3.0; // Volume of pyramid
}
