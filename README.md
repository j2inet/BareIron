# A Derivitive Work Based on the Efforts of [p2r3](https://github.com/p2r3)'s project [bareiron](https://github.com/p2r3/bareiron)

* Taken from commit [6a65b8a](https://github.com/p2r3/bareiron/commit/6a65b8acba6d8dc6aebdf08469f6b4729e0fcf77)

First, I want to give credit to the person to which it is owed. This repository is based on the work of p2r3 and his efforts to host a minimalistic minecraft server on an embedded device. I came across his video when I was looking for some information on the protocol that Mincraft uses for its server. I thought his work made for a very practical start to get up-and-running ASAP. If you stumbled upon this repository first, please show appreciation to him. 

* GitHub Repository - https://github.com/p2r3/bareiron
* Source YouTube Video - https://youtu.be/p-k5MPhBSjk?si=ewNUih2gyWHL-AOx


# My Journey

I'm engaging in this code as a personal interest. I don't plan to maintain it. This is only a snapshot of what I had to do to get this code to work in this timeframe of 2025 September. 


## Software Components
* Visual Studio 2022
* Download Updated JDK - https://www.oracle.com/java/technologies/downloads/#jdk24-windows
* [Minecraft Java Server ](https://piston-data.mojang.com/v1/objects/6bce4ef400e4efaa63a13d5e6f6b500be969ef81/server.jar)


## Extraction of the Registries from the Java Server

After downloading the JavaServer, I ran the command 

`java -DbundlerMainClass="net.minecraft.data.Main" -jar `

More on running that command can be found [here0](https://minecraft.wiki/w/Minecraft_Wiki:Projects/wiki.vg_merge/Data_Generators)


## Modification to the C code
I want to use some memory-safe C++ features. I've renamed the files from having the `.h` and `.c` extensions to `.hpp` and `.cpp` extensions accordingly. The script for extractign information from `server.java` is also moddified to to output files with those extensions. 

The `ssize_t` (signed size) type is not found on windows. I've converted those to `SSIZE_T` and have commented out includsion of the POSIX file `unistd.h`.