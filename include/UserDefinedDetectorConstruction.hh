
#ifndef UserDefinedDetectorConstruction_h
#define UserDefinedDetectorConstruction_h 1

// classes to include from the Geant4 framework
#include "G4VUserDetectorConstruction.hh"
#include "G4ThreeVector.hh"

// use classes without importing it yet - forward definition
class G4VPhysicalVolume;

class UserDefinedDetectorConstruction : public G4VUserDetectorConstruction
{
  public:
    UserDefinedDetectorConstruction();
    virtual ~UserDefinedDetectorConstruction();

    void DefineMaterials();
    virtual G4VPhysicalVolume* Construct();

  private:
    // members concerning the calorimeter
    G4double caloSizeXY;
    G4double activeMaterialThickness;
    G4double passiveMaterialThickness;
    G4int nLayers;
};
#endif
