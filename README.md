XT Keyboard Project:

This repo is for all the files used in designing and manufacturing a mechanical keyboard that I made from scratch
The keyboard itself is a modified XT layout, which was a very popular layout for 1980's keyboards.

The case is inspired by the IBM Model F77, Cherry G80-0418 and the modern NCR80.
Later angularity and side-bezel thickness was inspired by the Pravetz 16 from the Soviet Union and various NCR G80 varieties, for example the NCR G80-0478.

The pcb is hotswap with stepped caps lock, split left- and right shift, and split backspace compatibility.
In addition, it is QMK compatible, due to the ATMega32u4 microchip. Further VIA compatibility to be added.
Due to the case dimensions, the pcb does not have an onboard USB type C recepticle, rather using a Molex Pico EZmate connector and a daughterboard,
in this instance the UDB (Unified Daughterboard) C4.

1. Layout

![Capture2](https://github.com/user-attachments/assets/e3e69016-4f0c-4fa5-b3fa-685c7375eff4)

The layout is a mix of the standard HHKB for the Alphanumerical section, XT-esque left side F-row and a 3x5 1U grid inspired by the IBM Model F-77


2. Schematics

Early visualization of switch matrix
![switch_matrix](https://github.com/user-attachments/assets/95c27249-d844-417f-8f49-6b42e8cd5660)

Switch matrix translated to Kicad schematics
![pcb_v3](https://github.com/user-attachments/assets/d059478e-083b-4bb1-b892-20b6382b63d1)

Further schematics
![Capture](https://github.com/user-attachments/assets/9a00347e-db73-4aa5-931f-5fcaa56ee3bb)

Finalized PCB
![final](https://github.com/user-attachments/assets/66b51cb9-12b7-4a6a-bea4-8284c0993cd4)

3. Case

Top case w/ plate
![final](https://github.com/user-attachments/assets/68c99e36-cbb0-464d-b17c-7550f1b331e5)

Top and Bottom case side profile
![side](https://github.com/user-attachments/assets/beff7d99-0644-4bc3-8f55-bdb2cbf8d8c6)

Back view including slit for UDB implementation
![back](https://github.com/user-attachments/assets/80358bba-dc43-46c4-bf46-626a117b9963)

Inside view of Top case, showing plate top mount + UDB implementation
![top_bottom](https://github.com/user-attachments/assets/417182de-cf54-46d3-a71b-26c8dc4cf741)




