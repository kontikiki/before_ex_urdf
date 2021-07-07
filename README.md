# ex_urdf
how to use pan-tilt model in gazebo

1. Install Ubuntu 18.04 ( bionic beaver)

2. Install ROS1 ( melodic )

3. and install any other dependencies for using gazebo & ROS (ex> gazebo_ros_pkgs)

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
    
    $rosrun ex_urdf topic_pub ang 0 0 1.5707
    
    and if you type & execute the command below, the pan-rod rotate continuousely with constant velocity("100").
   
    $rosrun ex_urdf topic_pub vel 0 100 0
   
    That commands are published every 1 second. 
    
13. and if you want to load custom world, go to ~/catin_ws/src/ex_urdf/world 

14. and execute below command. 
 
    $gazebo test_table_d435.world  (or any other world that you make)
   
   notice!! cofirm the roscore(master) is alive or not before executing this pan-tilt model. if there is no roscore, execute it first. 
   
   $roscore
   
   ![Screenshot from 2021-07-05 09-59-12](https://user-images.githubusercontent.com/18581818/124569138-a4620700-de80-11eb-8c5a-59151285cb64.png)
   ![Screenshot from 2021-06-24 11-10-15](https://user-images.githubusercontent.com/18581818/124569200-b348b980-de80-11eb-86b7-f49361f2eb61.png)
   ![Screenshot from 2021-06-08 17-00-15](https://user-images.githubusercontent.com/18581818/124569513-f99e1880-de80-11eb-96cc-2406976027eb.png)
   ![Screenshot from 2021-06-24 13-27-43](https://user-images.githubusercontent.com/18581818/124569611-11759c80-de81-11eb-8b2c-9f7615f5cfd3.png)
