# Dune & Dumber: The Sand Leveling Robot

**Dune & Dumber** is a semi-autonomous robotic platform designed to level uneven sand terrain using active mechanical control and real-time inertial feedback. Built for the John Deere × HackIllinois 2026 hardware hackathon, the system integrates mechanical design, embedded electronics, and closed-loop control to achieve adaptive terrain leveling.



---

## Project Overview

Construction and infrastructure projects require precise terrain preparation to ensure structural stability and surface uniformity. This project explores robotic sand manipulation through a compact, modular, and low-cost robotic platform capable of actively leveling unknown granular terrain.

**Key Features:**
- Actively controlled front raking plough  
- Rear cylindrical smoothing roller  
- IMU-based closed-loop leveling correction  
- Hybrid manual + autonomous control  
- Modular, rapid-prototype mechanical design  

---

## Mechanical Design

The mechanical system consists of a front-mounted raking plough that redistributes granular material, followed by a rear cylindrical roller that smooths and compacts the surface. The plough angle and roller position are actively controlled to compensate for local terrain slope.

Key design considerations included:
- Efficient granular shearing and redistribution  
- Structural stiffness with minimal mass  
- Modular brackets for rapid iteration  
- Mechanical compliance to prevent jamming  

---

## Electrical System

The embedded system is built around an Arduino microcontroller interfaced with a motor driver, servo actuators, and an inertial measurement unit (IMU).

**Hardware Components:**
- Arduino Uno  
- TB6612 dual H-bridge motor driver  
- MPU6050 IMU  
- MG996R servo motors  
- Dedicated 7.2V servo power rail  

The electrical design emphasizes noise isolation, power stability, and reliable sensor acquisition.

---

## Control Strategy

The robot implements a hybrid control architecture:

- **Manual mode:** Operator controls robot motion via IR remote  
- **Auto-leveling mode:** Closed-loop IMU feedback actively adjusts plough and roller angles to maintain surface flatness  

Servo actuation is driven by proportional feedback from the measured pitch angle, with filtering and deadband to suppress noise and vibration-induced oscillations.

---

## Software Architecture

The firmware implements a real-time loop consisting of:

- Sensor acquisition  
- Signal filtering  
- Control law evaluation  
- Actuator command generation  
- Safety monitoring  

Emphasis was placed on robustness, deterministic timing, and fault tolerance.

---

## Performance & Results

The robot successfully flattens uneven sand terrain, significantly reducing height variation and eliminating wheel tracks. The system demonstrates stable performance across varying surface conditions and slopes.

**Limitations:**
- Reduced effectiveness in deep craters  
- Track tension degradation during extended operation  
- Servo torque limits on steep inclines  

---

## Safety Features

- Power rail isolation  
- Inline fuse protection  
- Servo saturation limits  
- Deadband and filtering for oscillation suppression  
- Emergency stop via IR remote  

---

## Lessons Learned

- Raking-based soil interaction significantly outperforms pushing mechanisms in granular environments  
- Active mechanical compliance improves robustness on uneven terrain  
- Closed-loop feedback is essential for maintaining consistent surface flatness  
- Rapid prototyping enables accelerated design convergence  

---

## Future Work

- Vision-based terrain mapping  
- Autonomous path planning  
- Helical smoothing roller for lateral redistribution  
- Higher-performance onboard compute platform  

---

## Team

- Aman Jhurani  
- Alex Tolliver 
- Manav Chopda
- Erick Munoz

---

## License

This project is released under the MIT License.
