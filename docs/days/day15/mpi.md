---
layout: default
title: MPI in CLion
nav_exclude: true
---
## MPI in CLion

It is possible to run MPI programs directly in CLION.  The easiest way is with in the built-in terminal in Clion.  In the terminal navigate to the correct build directory (usually cmake-build-debug or cmake-build-release).  Run the mpirun command as standard and specify the built executable.  

```bash
mpirun -n 2 ./day15
```

CLion can also be used to attached and debug limited number mpi runs.  It is recommended to put a sleep statement at the beginning of the program because attachment is done after each mpi process starts.  Without the sleep the program may finish before debugging starts.

1. Add sleep statement to program.
2. Place debug breakpoint in program. 
3. Build and launch (debug version) of program using the mpirun command outlined.
4. Follow the [CLion attach to process](https://www.jetbrains.com/help/clion/attaching-to-local-process.html) to attach to each of the mpi ranks.  This must be done for each mpi rank.