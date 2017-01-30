

# qd - a CAE Python Library

[![Build Status](https://travis-ci.org/qd-cae/qd-eng.svg?branch=master)](https://travis-ci.org/qd-cae/qd-eng)

This python2 library is an open source software package with utility functions regarding
engineering, especially Simulation and Computer Aided Engineering (CAE).
The library is still young, so features drop in over time depending on the
persons who contribute. Visit our website at http://www.qd-eng.de/

CAE suffers greatly from expensive tools with bad or moderate scripting access.
Also many algorithms developed in research never get published due to licensing
or being very specific regarding a certain software environment. Engineering is
lacking behind here, contrary to modern informatics.

We want to tackle this issue with this free library, in order to give engineering
a boost. Use it, build more awesome applications with it, share your projects
too and if possible contribute.

*Changelog 31.01.2017*
Version 0.3.6

D3plot:
 - Added few outputs to d3plot.info()
 - Bugfix causing read of only data from state 0 if multiple states are in one file

*Changelog 19.01.2017*
Version 0.3.5

Binout reader now complete:
 - binout.read(...) for finding and getting data
 - binout.to_string(...) for array conversion to string


# Sub-Modules

Current Module List:

1. [qd.cae.dyna](https://github.com/qd-cae/qd/blob/master/QD_CAE_DYNA.md)
  - Read D3plot (DONE)
  - Read Binouts (DONE)
  - Read Input Files (partially done)
2. ?

For more details, look into the helper files.

# Installation

If possible, use the pre-compiled python-wheels in the dist folder and install with pip.
The wheel is always compiled with FEMZIP support. For compiling the code yourself,
the library needs Boost.

# Compilation

If one wants to compile the code himself, register your boost directory in the top of the setup script. If one want's to compile with femzip support, the link libraries
need to be downloaded from the official website from SIDACT.

In case one wants to use it for another C++ application, the source code may
also be compiled without the python2 wrapper. CMake is recommended in that case.

# License

See the LICENSE file.
For further licensing requests or questions contact us.

# Authors

- C. Diez
