# ex_urdf
using pan-tilt model in gazebo

1. Install Ubuntu 18.04 ( bionic beaver)

2. Install ROS1 ( melodic )

3. and install any other dependencies for using gazebo & ROS

4. putting the line in .bashrc file

source /usr/share/gazebo/setup.sh  

5. $cd ~/
   
   $mkdir catkin_ws
   
   $cd catkin_ws/
   
   $mkdir src
   
   $cd src/
   
   $git clone https://github.com/UnstructuredWork/ex_urdf.git

6. $cd ~/catkin_ws
   
   $catkin_make

7. $cd ~/
   
   $git clone https://github.com/UnstructuredWork/exercise.git
   
8. $cd exercise
   
   $cd build
   
   $cmake ../
   
   $make

9. $cd ..
   
   $gedit CMakeLists.txt
   
   change 'mypantilt1_plugin' -> 'mypantilt2_plugin', and repeat 8.

10. execute the below line.
   
   $roslaunch ex_urdf pantilt_world.launch
   
11. Now you can see the pan-tilt linkage rods in Gazebo!

12. If you wanna make moving the rods, you can execute in command line.
    for examples,if you type & execute that command below, the tilt-rod(attached camera) rotate 1.5707 radian (90 degree)
   
   $rosrun ex_urdf ang 0 0 1.5707
    
   and if you type & execute the command below, the pan-rod rotate continuousely with constant velocity("100").
   
   $rosrun ex_urdf vel 0 100 0
   
   That commands are published every 1 second. 
    
13. and if you want to load custom world, go to ~/catin_ws/src/ex_urdf/world 

14. and execute below command.
   
   $gazebo test_table_d435.world  (or any other world that you making)
   
   notice!! cofirm the roscore is alive or not. if there is no roscore, execute first. 
   
   $roscore
