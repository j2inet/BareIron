# Journal

##2025年9月18日

https://github.com/j2inet/BareIron/commit/17c04b00a84b6b9996a1ef531ed26ec98442b271

Now that I've gotten the code to compile, I figured I would keep a journal of my efforts here. Chances are I will lose interest with this before I make it a substantial distance. But someone else might one day find it helpful (Or I might pick it up again one day). I'm only working on this in the moments before I fall asleep. My progress is going to be slow. 

This is what I've done so far. 

* Changed the file extensions from `.c` and `.h` to `.cpp` and `.hpp`
* replaced some use of `char*` with STL types
* Made the code Compile

### Changing the File Extensions

This wasn't just an aesthetic decision. Changing the file extension both changes how my dev tools treat the files and communicates that the code is intended to be C++. If you look at the code now, it looks like regular C code with some STL types sprinkled here and there. And at this moment, that is all that it is. I did remove the use of some functions that the compiler marked as less safe. Most of these functions concerned copying strings. They were replaced with safer versions of the functions and in a few cases I dropped the functions alltogether and reimplemented logic using STL types. 

### Replaced `char*` with STL types

I don't like passing data around as `char*` types. I've changed usage of this to either `std::string` for read-only data and have used std::vector<char> for buffers that must be written to. This also lets me use STL operations for copying data around and avoid risking certain memory errors. 

### Made the Code Compile

To make the code compile, there were some other changes I had to make . I replaced `sstize_t` with `SSIZE_T`, replaced the usage of some other functions that are not supported on the Microsoft Compiler, and swapped out a function for getting time with a function that uses `QueryPerformanceCounter()`. That the code compiles doesn't mean that it runs. If I start minecraft and connect it to my local server, Minecraft immediately gets disconnected. For now, that's fine. A milestone has been reached. I need to decide how to reach my next milestone of getting the code in a state where Minecraft doesn't disconnect immediately. 

