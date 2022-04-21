---
layout: default
title: Day 17 - MPI and Parallelism
nav_order: 17
parent: Days
---

The Message Passing Interface (MPI) is a standard api for communication on parallel computing architectures. ABLATE uses MPI for its primary communication layer on large scale computing systems. Follow the [Introduction to Parallel Computing Tutorial](https://hpc.llnl.gov/documentation/tutorials/introduction-parallel-computing-tutorial) for an overview of parallel computing.  With CLion you can debug small mpi cases.  Follow the CMake guide on day 15 to link in PETSc and mpi.  Create a new executable and including the following code.

```c++
#include <mpi.h>
#include <iostream>
#include <chrono>
#include <thread>

int main(int argc, char **argv) {
    // sleep the code to allow the debugger to attach
    // std::this_thread::sleep_for(std::chrono::milliseconds(20000));

    // Initialize the MPI environment
    MPI_Init(NULL, NULL);

    // Determine the number of processes
    int size;
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    // Get the rank of this process
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // Get the name of this processor
    char name[MPI_MAX_PROCESSOR_NAME];
    int nameSize;
    MPI_Get_processor_name(name, &nameSize);

    // Report from this
    std::cout << "Hello from " << rank << "/" << size << " on " << name << std::endl;

    // Cleanup mpi
    MPI_Finalize();
}
```

Use the following steps to debug mpi processes (shown in the attached video) in CLion.

1. Build and run this program in CLion as usual.  It should create report a single process.
2. Inside the terminal in CLion 'cd' into the cmake-build-debug (or other cmake-build-* directory).
3. Run the day 17 executable with mpiexec.  It should report 3 processes.
   ```bash
   mpiexec -n 3 ./day17
   ```
4. Inorder to debug in CLion you need to make the code wait until the debugger is attached.  Comment in the `std::this_thread::sleep_for(std::chrono::milliseconds(20000));` line and place a break point on the `MPI_Init` line. Rebuild the executable.
5. Run the day 17 executable with mpiexec as before. Immediately go to `Run > Attach to Proccess...` and select day17

<video style="width: 100%" controls>
    <source src="clionMpi.webm"
            type="video/webm">
    Sorry, your browser doesn't support embedded videos.
</video>

**Goals**
1. Follow the [Introduction to Parallel Computing Tutorial](https://hpc.llnl.gov/documentation/tutorials/introduction-parallel-computing-tutorial)
2. Compile and debug the MPI example in CLion
3. Commit these activities and push to your private CodingAblate Repo.