This project is focused on operating systems (OS) concepts and involves understanding system calls, virtualization, and performance measurement in different environments (bare metal, virtual machine, and container). It contains two main assignments:

### 1. **Using strace to Understand a Program (20 points)**
   - You will use the `strace` command to trace the system calls made by a program, specifically the "WhatIDo" program. By analyzing the `strace` output, you will deduce what the program does, focusing on the system calls it invokes (e.g., file access, memory mapping).
   - The task is to describe what the program does based on the `strace` output and write a brief description in a README file.

### 2. **The Costs of Trap and Virtualization (80 points)**
   - This part of the project measures the overhead introduced by system calls (traps) and virtualization (VMs and containers).
   - You will:
     - Create a static library (`osm`) that measures the execution time of operations like addition, function calls, and traps (system calls).
     - Set up a virtual machine (VM) using KVM and QEMU and a container using Singularity and Docker.
     - Measure and compare the performance of operations in the VM, container, and directly on the machine.
     - Gather data, create a graph comparing the results, and submit the graph along with the source code.

The project aims to deepen your understanding of OS internals, such as system calls, virtualization, and performance benchmarking using tools like `strace`, `gettimeofday`, and VM/container setups.
