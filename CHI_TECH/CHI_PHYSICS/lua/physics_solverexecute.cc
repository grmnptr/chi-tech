#include "../../CHI_LUA/chi_lua.h"
#include<iostream>
#include "../chi_physics.h"

extern CHI_PHYSICS chi_physics_handler;

//#############################################################################
/** Adds a region to a solver.

\ingroup LuaSolver
\author Jan*/
int chiSolverExecute(lua_State *L)
{
  int solver_index = lua_tonumber(L,1);

  //======================================================= Getting solver
  chi_physics::Solver* solver;
  try{
    solver = chi_physics_handler.solver_stack.at(solver_index);
  }
  catch(std::out_of_range o)
  {
    std::cout << "Invalid solver handle" << std::endl;
    return 0;
  }

  solver->Execute();

  return 0;
}