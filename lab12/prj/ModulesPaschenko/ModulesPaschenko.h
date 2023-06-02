#ifndef MODULESPASCHENKO_H_INCLUDED
#define MODULESPASCHENKO_H_INCLUDED

#include <cmath>

class ClassLab12_Paschenko
{
private:
    double cubeFacesValue;
    double cubePlanesValue;
    bool cubeIsEmptyInside;

public:
    ClassLab12_Paschenko(const double facesValue = 1, const double planesValue = 1, const bool isEmptyInside = true)
    {
        cubeFacesValue = facesValue;
        cubePlanesValue = planesValue;
        cubeIsEmptyInside = isEmptyInside;
    }

    double getCubeFacesValue() const {
        return cubeFacesValue;
    }
    double getCubePlanesValue() const {
        return cubePlanesValue;
    }
    bool getCubeIsEmptyInside() const {
        return cubeIsEmptyInside;
    }

    double getCubeVolume(double face);

    void variableCubeAttributes(const double facesValue = 1, const double planesValue = 1, const bool isEmptyInside = true);
};

double ClassLab12_Paschenko::getCubeVolume(double face)
{
    variableCubeAttributes(face);
    double volume = pow(cubeFacesValue, 3);
    return volume;
}

void ClassLab12_Paschenko::variableCubeAttributes(const double facesValue, const double planesValue, const bool isEmptyInside)
{
    cubeFacesValue = facesValue;
    cubePlanesValue = planesValue;
    cubeIsEmptyInside = isEmptyInside;
}

std::string TestResult(ClassLab12_Paschenko Cube, int number, double face)
{
    std::string result;
    result = "Test Suite ¹"+std::to_string(number)+"\nFace: "+std::to_string(Cube.getCubeFacesValue())+"\nPlanes: "+std::to_string(Cube.getCubePlanesValue())+"\nIs empty: "+std::to_string(Cube.getCubeIsEmptyInside())+"\nVolume: "+std::to_string(face)+"\n";
    return result;
}
#endif // MODULESPASCHENKO_H_INCLUDED
