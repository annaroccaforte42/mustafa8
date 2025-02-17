#ifndef RUN_HH
#define RUN_HH

#include "G4UserRunAction.hh"
// include standalone root functions in Geant4
// that is to avoid to include ROOT dependencies
// it includes the class G4AnalysisManager class
#include "g4root.hh"


class MyRunAction : public G4UserRunAction
{
public:
	MyRunAction();
	~MyRunAction();

  virtual void BeginOfRunAction(const G4Run*);
  virtual void EndOfRunAction(const G4Run*);
};

#endif
