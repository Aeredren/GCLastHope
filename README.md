# GCLastHope
A GameCube memory card .raw images unfucking tool [WIP]

## What is it ?
The goal is to make a C command line tool to try saving the maximum data from
 corrupted GameCube memory card images. If I succeed in writing such a program
 I hope to port it to the wii.

**What the software will do:**
* Present advanced data from the .raw images in a human understandable way
 (header, directory and block allocation map details, checksum error, details
 on files datas)
* Try to repair checksum errors in Header, Directory and Block Allocation Map
* Try to extract individuals save files as .gci even with corrupted card's
 metadata
* Propose both the "repaired" .raw and a brand new .raw from extracted .gci

**What the software will eventually do:**
* change the size of your .raw to fit any desired valid GCmemcards sizes.
* provide a man page

**What the software will NOT do:**
* Backup .raw images from real hardware
* Restore .raw images to real hardware
* GUI
* Coffee

There is already 2 tools out there to manage real GCmemcards. Use those.
 [\[1\]](https://sourceforge.net/projects/savegame-manager-gx/)
 [\[2\]](https://github.com/suloku/gcmm)

If you just want to manage valid save files I recommand using the GCmemcard
 managing tool from [dolphin emulator](https://dolphin-emu.org/). This software
 might end up doing what you want but it is not made for it.

## Usage
Not written yet

## How to contribute
Not written yet

## Disclaimer
This software is a free software publish under the GPLv3. It come with no 
 warranty at all. It has no warranty of fitness for a particulare purpose.
 I am not responsible for any damage to your computer or gamecube/wii if you
 use saves images generate by this software. (See LICENCE for more)

That say, you'd better try the new save images on an emulator before using them
 on real hardware. I cannot assure you that they wouldn't be still corrupted or
 partially corrupted. (The software just do the best it can to try and save
 something from your corrupted data)

I will not make iOS, Android, Apple OSX or Microsoft Windows port.
 In fact, I will ONLY make a Linux Command Line out of it, and eventually a
 homebrew for the wii.
 That say, if you compile it succesfully on another platform let me know ;)
