# KBD
## Project Overview
This application is designed to enable a second keyboard to function as a fully programmable macro-board as a self-contained application.
## Application Details
The application uses a **VMAP** file to store the information used to alter the functionality of the second keyboard. This filetype is proprietry to the application. To make it easier to work with this filetype, there is an included editor bundled into the application.
## Installation
-- To Be Added --
## Platform
This repository is being developed and maintained using the **Linux kernel**.<br />
It's ability to function multi-platform has **_not_** been tested and thus should be assumed non-functional at this time
## Languages
This project is written in C++ and uses Qt for the GUI. <br />
All code in this repository is under GNU GPLv3.0 licencing
## Limitations
- Only the currently loaded VMAP file can be modified by the editor
- VMAP files **_must_** be UTF-16 or ASCII formatted
- Keyboards are displayed with the names presented to the Operating System
