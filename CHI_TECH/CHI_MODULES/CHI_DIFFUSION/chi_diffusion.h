#ifndef _chi_diffusion_h
#define _chi_diffusion_h

#include <petscksp.h>

//######################################################### Namespace def
namespace chi_diffusion
{
  class Solver;
  class Boundary;
  class BoundaryDirichlet;
  class BoundaryReflecting;
  class BoundaryRobin;

  PetscErrorCode KSPMonitorAChiTech(KSP ksp,PetscInt n,
                                    PetscReal rnorm,
                                    void* monitordestroy);
}



#endif