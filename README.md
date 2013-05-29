This is my kiss-script git repo.  Using the build-2.sh script you can build the KISS IDE.  Of course libkovan is still not working on Arch linux....Not my fault.
The script includes .deskop files that work on Gnome and Unity.  KDE should also be able to use them. They are put in /usr/share/applications after building. I am 
going to continue working on Arch Linux and Fedora support. If anyone wants a certain Distro to be supported email me at ryanvader82@gmail.com  
Dependencies:
make, gcc, cmake 2.8+, Qt 4.7 +, QScintilla 2, easydevice, libcompiler.so (Available from code::blocks), g++, Zbar, Opencv (script installes from system repositories 
not from github.com/kipr/opencv/)

This script installs the above dependencies. It may over-install: meaning that it may install more than what is needed. For example libopencv-* and libqt4-*
Also I have added qt4 fixes.  On ubuntu cmake will not find at4 unless -DQT_QMAKE_EXECUTABLE:FILEPATH= is used.  I have included this. IF qmake-qt4 is not installed 
cmake WILL NOT USE THIS FIX.  More then likely you will not have to though.  The fix was included because Ubuntu 12.04 + uses Qt5 as default. Qt4 can be installed 
though. 


If you are on Arch Linux you will more then likely experience an error when building libkovan.  This is because ffmpeg that Arch Linux uses is causing issues. 
kovan-serial includes the Daemon that can allow for communication with the Link via USB. I am currently trying to figure this part of KIPR IDI out. Kovan-kmod is 
supposed to include the kernel module.  I am not sure about that as well.  The help documentation in the IDE is not working either.  I wish they were just part of
kiss and not seperate.  But that would be too easy. ;)

How to use:

Download with:

git clone git://github.com/ryanvade/kiss-script.git

cd kiss-script

time bash build-2.sh

Follow any instructions. 
