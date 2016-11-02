# ArmA 3 Linux Launcher

ArmA 3 Launcher for Linux.
Since Bohemia didn't port their launcher to Linux and existing launcher didn't satisfy my needs I decided to create my own.

# This is work in progress, for now it's only for GUI preview

### Features

* Read location of ArmA 3 (config.vdf parsing)
* Workshop mods support (symlink to ~arma/!workshop)
* Detect @mods (ArmA main dir)
* Add mods from outside ArmA's dir (symlink)

### TODO

* Steam integration (info about downloading)
* Server browser
* Launching ArmA with desired options
* .paa reading - for displaying mod images in launcher
* Mod dependency caching from Steam Workshop
* MacOS port


### Building

Gtkmm is required

    git clone https://github.com/muttleyxd/arma3_linux_launcher.git
    cd arma3_linux_launcher
    make

After that you can launch with

    ./arma3_linux_launcher
