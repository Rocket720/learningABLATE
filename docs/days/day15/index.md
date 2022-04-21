---
layout: default
title: Day 15 - PETSc Tutorials
nav_order: 15
parent: Days
---

This is where a lot of what you have learned comes together and stats to be applied with PETSc.  These tutorials explore some of the basic PETSc objects and how you may interact with them.  

You can run PETSc code directly in CLion, but you need to tell CMakeLists.txt where to find the PETSc libraries. If you built PETSc following the directions at [ABLATE specific directions](https://ablate.dev/content/development/InstallingDependencies.html#install-petsc) it should be simple to update the CMakeLists.txt file.  To check run ```echo $PKG_CONFIG_PATH``` in your terminal and make sure that the output directory includes the file ```PETSc.pc```.  

1. Add the following to the top of your CMakeLists.txt file (right after cmake_minimum_required).  This insures that the same compiler is being used for PETSc and your code. 
   ```cmake
   find_package(PkgConfig REQUIRED)

   # Check if a CXX compiler is explicitly stated
   if(NOT DEFINED CMAKE_CXX_COMPILER)
   # Set the compilers based upon the PETSc package
   pkg_get_variable(PETSC_CXX_COMPILER PETSc cxxcompiler)
   set(CMAKE_CXX_COMPILER ${PETSC_CXX_COMPILER})
   endif()
   ```

2. Find the petsc library and link with your code.  Add this line for any day you would like and update the day to the correct project.
   ```cmake
   # Load the Required 3rd Party Libraries
   pkg_check_modules(PETSc REQUIRED IMPORTED_TARGET GLOBAL PETSc)
   target_link_libraries(day15 PUBLIC PkgConfig::PETSc)
   ```
   
3. Clean and refresh the [CMake Cache](https://www.jetbrains.com/help/clion/cmake-cache.html). 

Simple PETSc Tutorials:
- [Vectors in PETSc]({% link days/day15/vec.md %})
- [Matrices in PETSc]({% link days/day15/matrix.md %})
- [Solving a Linear System]({% link days/day15/ksp.md %})
- [Running MPI with CLion]({% link days/day15/mpi.md %})

**Goals**
1. Complete activities for the provided PETSc tutorials.
2. Run the vec, matrix, and ksp tutorial with multiple mpi ranks.
3. Commit these activities and push to your private CodingAblate Repo.