#!/bin/bash

# ------------------------------------------------------------------------------------------------------------------------------------------------
# This script should help facilitate the building of the KISS IDE on Linux Systems.  Unfortunately due to the complexity of linux package managers
# this script will not be able to install dependencies on systems other then Debian(by extension including Debian based).  Sorry. 
# By ryanvade...For linux support: www.ultimateeditionoz.com/forum/index.php AND www.forumubuntusoftware.info 
# ------------------------------------------------------------------------------------------------------------------------------------------------

PROGNAME=$(basename $0)

trap clean_up SIGHUP SIGINT SIGTERM
trap term_exit TERM HUP
trap int_exit INT

tmp_path="$HOME/.tmp/"

curr_path=$PWD

function clean_up {
                  # housekeeping
                  echo "I have been killed. Exiting."
                  exit
}


function graceful_exit
{
	#####
	#	Function called for a graceful exit
	#	No arguments
	#####

	echo "All done."
	exit
}


function error_exit 
{
	#####	
	# 	Function for exit due to fatal program error
	# 	Accepts 1 argument
	#		string containing descriptive error message
	#####

	err_msg="An erro hasr occured at line $LINERO: ${PROGNAME}: ${1}"
	echo ${err_msg} >&2
	clean_up
	exit 1
}


function term_exit
{
	#####
	#	Function to perform exit if termination signal is trapped
	#	No arguments
	#####

	echo "${PROGNAME}: Terminated"
	clean_up
	exit
}


function int_exit
{
	#####
	#	Function to perform exit if interrupt signal is trapped
	#	No arguments
	#####

	echo "${PROGNAME}: Aborted by user"
	clean_up
	exit
}

function change_directory_error
{
        #####
        #      Function to perform if the the script can't change the working
	#      directory
	#####
	
	echo "Cannot change directory!  Aborting."
	echo "$1" 1>&2
	exit 1
}

function cmake_check
{
	#####
	#     Check to see if cmake is installed. If not say so. 
	#####
	if [! hash cmake 2>&-]; then
	
	echo "I need cmake. Execute this script when it is installed. "
	else
        echo "I detect cmake. Proceeding."
	fi
	
	
}

_exec()
{
    status=$?
    if [ $status != 0 ]; then
        exit $status
    fi
    echo "[+] $@"
    $@
}

function test_root
{
    mkdir -p "$tmp_path"

    if [ ! "$LOGNAME" == "root" ]; then
        echo "[+] detecting user $LOGNAME (non-root)"
        echo "[+] checking if sudo is available ... "
        sudotest=`type sudo &>/dev/null ; echo $?`

        if [ "$sudotest" == 0 ]; then
            sudo -K
            if [ -e "$tmp_path/sudo.test" ]; then
                rm -f "$tmp_path/sudo.test"
            fi
            while [ -z "$sudopwd" ]; do
                echo -n " - enter sudo-password: "
                stty -echo
                read sudopwd
                stty echo

                # password check
                mkdir -p "$tmp_path"
                echo "$sudopwd" | sudo -S touch "$tmp_path/sudo.test" > /tmp/sudo.output
                InSudoers=$(grep -i "sudoers" /tmp/sudo.output)
                if [ -n "$InSudoers" ]; then
                    rm /tmp/sudo.output
                    exit
                fi

                if [ ! -e "$tmp_path/sudo.test" ]; then
                    sudopwd=""
                fi
            done

            SUDO="/usr/bin/sudo -S"

            rm -f "$tmp_path/sudo.test"
            echo
        else
            echo "You're not root and sudo isn't available. Please run this script as root!"
            exit
        fi
    fi
    dependency_fix
}
function dependency_fix {

if hash apt-get 2>&-; then

	echo "$sudopwd" | _exec $SUDO apt-get update

	echo "$sudopwd" | _exec $SUDO apt-get install libzbar-dev g++ libqscintilla2-dev cmake codeblocks  libopencv-* libqt4-* -y
	
	else
	echo "apt-get not found. This is not a debian based system."
fi

}
#################################################################################################################################################
#                                                         Function Declerations
#################################################################################################################################################
function build_libkar {

if cd "libkar"; then

pwd
 
 if [ ! -d "build" ]; then 
 
 #if no build directory
    
    mkdir build/
    
    cd build/
      
      else
       # if there is a build directory. Clean up. 
      
      sudo rm -rf build/*
      
      cd build/
  
    fi
  
  if [ -f /usr/bin/qmake-qt4 ]; then
   
   cmake -DQT_QMAKE_EXECUTABLE:FILEPATH="/usr/bin/qmake-qt4" ..
   
  else 
  
  cmake ..
  
  fi
  
  make
  if [ "$?" = "0" ]; then
  
  sudo make install

  else
  
  error_exit
  
  fi
  
else change_directory_error

fi



}

function build_pcompiler {

if cd "../../pcompiler/"; then

pwd

if  [ ! -d "build" ]; then
  
  # if no build directory

    mkdir build/

    cd build/
    
    else
    
    # if there is a build directory
    
    sudo rm -rf build/* 
    
    cd build/
fi
 
  
if [ -f /usr/bin/qmake-qt4 ]; then
   
   cmake -DQT_QMAKE_EXECUTABLE:FILEPATH="/usr/bin/qmake-qt4" ..
   
  else 
  
  cmake ..
  
  fi

make
  if [ "$?" = "0" ]; then
  
  sudo make install

  else
  
  error_exit
  
  fi

sudo make install

else change_directory_error

fi



}

function build_kovan-serial {

if cd "../../kovan-serial/"; then
  
pwd

if [ ! -d "build" ]; then
   
   #if no build directory
   
   mkdir build/
   
    cd build/
  
    else
    
    #if there is a build directory. Clean up. 
    
    sudo rm -rf build/*
    
    cd build/
fi

if [ -f /usr/bin/qmake-qt4 ]; then
   
   cmake -DQT_QMAKE_EXECUTABLE:FILEPATH="/usr/bin/qmake-qt4" ..
   
  else 
  
  cmake ..
  
  fi

make
  if [ "$?" = "0" ]; then
  
  sudo make install

  else
  
  error_exit
  
  fi

sudo make install

else change_directory_error

fi

}

function build_libkovanserial {

if cd "../../libkovanserial/"; then
  
pwd

if [ ! -d "build" ]; then
   
   #if no build directory
   
   mkdir build/
   
    cd build/
  
    else
    
    #if there is a build directory. Clean up. 
    
    sudo rm -rf build/*
    
    cd build/
fi

if [ -f /usr/bin/qmake-qt4 ]; then
   
   cmake -DQT_QMAKE_EXECUTABLE:FILEPATH="/usr/bin/qmake-qt4" ..
   
  else 
  
  cmake ..
  
  fi

make
  if [ "$?" = "0" ]; then
  
  sudo make install

  else
  
  error_exit
  
  fi

sudo make install

else change_directory_error

fi



}

function build_kiss {

if cd "../../kiss/"; then
  
pwd

  if [ ! -d "build" ]; then
  
  # if no build directory
  
  mkdir build

  cd build/
  
  else
  #if there is a build directory. Clean up.
  
  sudo rm -rf build/*
  
  cd build/
  
  fi

 if [ -f /usr/bin/qmake-qt4 ]; then
   
   cmake -DQT_QMAKE_EXECUTABLE:FILEPATH="/usr/bin/qmake-qt4" ..
   
  else 
  
  cmake ..
  
  fi

  make
  if [ "$?" = "0" ]; then
  
  sudo make install

  else
  
  error_exit
  
  fi

sudo make install
  
  else change_directory_error

  fi

  
  
}

function build_i2c_wrapper {
if cd "../../i2c_wrapper"; then

pwd

if [ ! -d "build" ]; then
  
  # if no build directory
  
  mkdir build/
  
  cd build/
  
  else
  
  # if there is a build directory. Clean Up. 
   
   sudo rm -rf build/*
   
   cd build/

fi

if [ -f /usr/bin/qmake-qt4 ]; then
   
   cmake -DQT_QMAKE_EXECUTABLE:FILEPATH="/usr/bin/qmake-qt4" ..
   
  else 
  
  cmake ..
  
  fi
  
  make
  if [ "$?" = "0" ]; then
  
  sudo make install

  else
  
  error_exit
  
  fi

sudo make install
  
  else change_directory_error

  fi
  
  
}

function build_libkovan {
if cd "../../libkovan"; then

pwd

if [ ! -d "build" ]; then
  
  # if no build directory
  
  mkdir build/
  
  cd build/
  
  else
  
  # if there is a build directory. Clean Up. 
   
   sudo rm -rf build/*
   
   cd build/

fi

if [ -f /usr/bin/qmake-qt4 ]; then
   
   cmake -DQT_QMAKE_EXECUTABLE:FILEPATH="/usr/bin/qmake-qt4" ..
   
  else 
  
  cmake ..
  
  fi

  make
  if [ "$?" = "0" ]; then
  
  sudo make install

  else
  
  error_exit
  
  fi

sudo make install
else change_directory_error

fi



}

function build_ks2 {
if cd "../../ks2"; then

pwd

if [ ! -d "build" ]; then
  
  # if no build directory
  
  mkdir build/
  
  cd build/
  
  else
  
  # if there is a build directory. Clean Up. 
   
   sudo rm -rf build/*
   
   cd build/

fi

if [ -f /usr/bin/qmake-qt4 ]; then
   
   cmake -DQT_QMAKE_EXECUTABLE:FILEPATH="/usr/bin/qmake-qt4" ..
   
  else 
  
  cmake ..
  
  fi

  make
  if [ "$?" = "0" ]; then
  
  sudo make install

  else
  
  error_exit
  
  fi

else change_directory_error

fi

}

function finish_move {

echo "Done Building and installing. Moving the entire folder to /opt ."

 cd ../../../

 pwd

 echo "$sudopwd" | _exec $SUDO cp -r ./kiss-script /opt
 
 echo "Linking"

# link IDE in /usr/bin
sudo ln -s /opt/kiss-script/kiss/deploy/KISS /usr/bin/KISS
sudo ln -s /opt/kiss-script/ks2/deploy/ks2 /usr/bin/ks2

# link libraries 
sudo ldconfig /usr/local/include/kiss
sudo ldconfig /usr/local/include/kovanserial
sudo ldconfig /usr/local/include/pcompiler
sudo ldconfig /usr/local/include/kovan
sudo ldconfig /usr/local/lib


echo "Done Linking. Moving Desktop files to /usr/share/applications if it exists "
echo "Links have been placed in /usr/bin. (for /usr/bin/KISS,ks2)."

if [ -d /usr/share/applications ]; then
	
	echo "$sudopwd" | _exec $SUDO cp /opt/kiss-script/{KS2.desktop,KISS.desktop} /usr/share/applications

	else

	echo "/usr/share/applications does not exist. So not copying Desktop files."
fi

if [ -f /usr/lib/codeblocks/plugins/libcompiler.so ]; then

sudo  ldconfig /usr/lib/codeblocks/plugins/libcompiler.so

else 

echo "libcompiler.so not found. Missing codeblocks."

error_exit

fi

echo "The BotBall Icon is included. Good bye." 


}

#################################################################################################################################################
#							Program Execution
#################################################################################################################################################




test_root

cmake_check

# now lets build

export STATIC_FFMPEG=1 

build_libkar

build_pcompiler

build_libkovanserial

build_kovan-serial

build_kiss

build_i2c_wrapper

build_libkovan

build_ks2

finish_move



exit
