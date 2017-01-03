# Laminar Flow Fountain
Co-op Project: Stuti Arya

#Project Description 
The system below is a Laminar Flow Fountain that converts the turbulent water stream at the inlet to a smooth laminar stream at the outlet.The stream is lit using an optical fiber tube. The systems also incorporates a cutter that divides the water stream at the outlet into desired volumes.

![lff](https://cloud.githubusercontent.com/assets/24885616/21599477/c8bdab7a-d121-11e6-8410-c6263b986140.png)

#Material Required

4" ABS Pipe

400 Drinking Straws

Window Mesh

Optical fibers

Scrub Pads

Threaded Rods 

Acrylic/Aluminum for the endcaps

Arduino Uno

EasyDriver v4.5

STM100 Stepper Motor

High Power 3W Led

Switch

#Software Required 
[Arduino] (https://www.arduino.cc/en/Main/Software)


#Constructing the Nozzle
- Drill a 1 inch hole on the side of the pipe (4’’ ID and 16’’ (in length) ABS pipe) at a distance of 1.5 inches from the inlet endcap.
- Place 1 layer of scrub pads inside the pipe at the inlet. The distance between the scrub pads and the end cap should be approximately 5 inches.
- Place the window mesh supported by a circular ring (piece of pipe) on top of the scrub pads.
- Put approximately 350 straws on top of the window mesh. These straw should be even on the side of the outlet and approximately 2 inches from the stream outlet.
- Place 6 optical fibers (~ 16 inches in length) in a straw and place the optical fiber tube in line with the outlet. The distance between the optical fibers and the stream outlet should be at least 0.75 inches.
- Place 2 balloons inside the pipe near the nozzle inlet to absorb the vibrations and stabilize the pressure fluctuations.
- For the outlet cap, drill a 1.4’’ bevel hole in a ¼’’ acrylic end cap and sand the water outlet with sand papers of grit 220, 400, 1000 and 2000 respectively.
- Integrate all the components using threaded stainless steel rods.

![pic1](https://cloud.githubusercontent.com/assets/24885616/21599833/a4e5300a-d127-11e6-9b7f-344715271caf.jpg)
![pic2](https://cloud.githubusercontent.com/assets/24885616/21599830/a4e0a5ee-d127-11e6-8401-7159fcf118ee.png)

#Stream Cutter

- Mount the motor on an acrylic cap (see Inkscape file for the design). Cut a piece of stainless steel and bend it in a zig zag shape.
- Attach the cutter arm on the motor using an acrylic washer that is tight fitted on the motor shaft.

![cutter1](https://cloud.githubusercontent.com/assets/24885616/21599894/9ce39ed6-d128-11e6-9635-6a2649af6fc2.JPG)

#Circuit for the Cutter
![pic5](https://cloud.githubusercontent.com/assets/24885616/21599916/ed906242-d128-11e6-82d1-519d7e1aa84f.png)

#Wiring Connections
Connect the red and green wires of the motor to the easy drive chip ‘A’ pins and the blue and yellow wires to pins ‘B’. Connect a 12 V power supply to the M+ and ground pin and  Connect the 3 – pin ground to the circuit ground. Connect the step pin to pin 9 on the Arduino. Connect the direction pin to pin 8 on the Arduino. 

Connect one leg of the switch to pin 3 on the Arduino via a resistor and the other leg to the circuit ground. Connect the second leg of the resistor to the 5V pin on the Arduino. 

Connect the LED to a 3V power supply separately.

#Working of the Code
When the switch is in the ON position, the if condition calls the move function. The move function makes the cutter arm sweep a certain number of steps. Once finished, the direction of the motor shaft is reversed and it sweeps back to the original position. The cutter is engaged only when the toggle switch is in the ON position. If the switch is turned off mid - way a cut, the cutter arm will still come back to its original position. This will enable the fountain mode to resume.

-To change the volume of the drink delivered, change the Delay (2000) in the if condition block of the code. Reducing this time step will reduce the volume of the drink delivered in each cut. 

-To increase/decrease the cutter arm angle, change the sweep (number of steps) value.

-To make the cutter move faster, change the Delay (1000) in the if condition block.

#Engaging the Cutter
- Connect the Arduino to your laptop using a USB cable
- Turn on the power for the 12V supply
- Upload the code to the Arduino
- Flip the switch to ON position
- To resume fountain mode, flip the switch to OFF position 

#Final Assembly

![pic6](https://cloud.githubusercontent.com/assets/24885616/21599989/64e4961e-d12a-11e6-87dc-4db729546928.png)
- Connect the nozzle to the ball valve. 

- Connect the ball valve to the pump through a T joint.

- Connect the vertical mouth of the T joint to a 2L plastic bottle. This bottle should be mounted vertically.

- Attach the cutter plate to the end cap and enclose the assembly with another pipe and end cap.

#Troubleshooting for Laminar Flow

If the flow is not laminar, make sure the beveled hole is very smooth and the shape has not changed while sanding.

The optical fiber tube should not be very close to the outlet. 

Ensure that the straws are levelled and the scrub pads have not shifted inside the nozzle due to water pressure.

Adjust the ball valve to control the flow rate so that the flow is laminar.

