#Proportional–Integral–Derivative - PID Control Project for Self-Driving Car
##The PID Controller:
###Tuned by manual
####Steps to tune this PID:
1. Set all gains to 0.
2. Increase Kd until the system oscillates.
3. Reduce Kd by a factor of 2-4.
4. Set Kp to about 1% of Kd.
5. Increase Kp until oscillations start.
6. Decrease Kp by a factor of 2-4.
7. Set Ki to about 1% of Kp.
8. Increase Ki until oscillations start.
9. Decrease Ki by a factor of 2-4.

Final PID coeffs:
P = 0.15
I = 0.000075
D = 1.5

####Steering = - total PID error

####Result: The car simulator is able to steer properly using the Cross Track Error, CTE as reference to calculate
the respective P, I, D error from the PID controller.  

####Optimization with higher vehicle speed can be achieved by further exploring manual tuning or auto tuning adopting algorithm like TWIDDLE
