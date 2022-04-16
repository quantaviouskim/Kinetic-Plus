# Kinetic-Plus
Unfortunately, I did not think to post this on github as I was developing it, so this repo will act as an archive of an old project. 
I wish I could show you my progress from step 1 to infinity but unfortunately, a stressed boy named Roy did not think about that.

This is the software for my senior design project in 2019 - 2020. 
Want to see my hardware contributions and more info about the project? Click [here](https://www.royis.me/kinetic-plus).


## Breakdown
-> IMU recieves pitch, roll, and yaw data
--> Swerve1.4.8 converts IMU readings into motor speed and acceleration (8 motors: 4 steering and 4 drive)
---> ODrive for smooth motor control
----> VESC motors are used for PID controls