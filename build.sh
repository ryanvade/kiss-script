#!/bin/bash

# ------------------------------------------------------------------------------------------------------------------------------------------------
# This script should help facilitate the building of the KISS IDE on Linux Systems.  Unfortunately due to the complexity of linux package managers
# this script will not be able to install dependencies.  Sorry. 
# By ryanvade...For linux support: www.ultimateeditionoz.com/forum/index.php AND www.forumubuntusoftware.info 
# ------------------------------------------------------------------------------------------------------------------------------------------------

PROGNAME=$(basename $0)

trap clean_up SIGHUP SIGINT SIGTERM
trap term_exit TERM HUP
trap int_exit INT


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

	err_msg="${PROGNAME}: ${1}"
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
      
      rm -rf build/*
      
      cd build/
  fi
  
  cmake ..
    
  sudo make install


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
    
    rm -rf build/* 
    
    cd build/
fi

cmake ..

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
    
    rm -rf build/*
    
    cd build/*
fi

cmake ..

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
  
  rm -rf build/*
  
  cd build/
  
  fi

  cmake ..

sudo make install
  
  else change_directory_error

  fi

  
  
}

function build_i2c_wrapper {
if cd "../../i2c_wraper"; then

pwd

if [ ! -d "build" ]; then
  
  # if no build directory
  
  mkdir build/
  
  cd build/
  
  else
  
  # if there is a build directory. Clean Up. 
   
   rm -rf build/*
   
   cd build/*

fi

cmake ..

make

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
   
   rm -rf build/*
   
   cd build/*

fi

cmake ..

sudo make install
else change_directory_error

fi



}
function finish_move {

echo "Done Building and installing. Moving the entire folder to /opt ."

if cd "../../../"; then

pwd

  sudo mv ./kiss-script ./opt
 
 else 
 error_exit
fi

echo "Linking"

if [ -f /usr/lib/codeblocks/plugins/libcompiler.so ]; then

sudo ldconfig /usr/lib/codeblocks/plugins/libcompiler.so

echo "Done Linking.If running on ubuntu with Unity, place your launchers in /usr/share/applications"

else 

echo "libcompiler.so not found. Missing codeblocks."

error_exit

fi

echo "The BotBall Icon is included. Good bye." 


}

#################################################################################################################################################
#							Program Execution
#################################################################################################################################################


if [ $(id -u) = "0" ]; then

echo "You are the root user. You cannot run this script. Is that funny?"

error_exit

else
# if not root continue

cmake_check

# now lets build

build_libkar

build_pcompiler

build_libkovanserial

build_kiss

build_i2c_wrapper

build_libkovan

finish_move

fi

exit