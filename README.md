# CASA0016-Vertical-Planter-DIY-
Introduction
As the Secretary of State sets out new legislation concerning the environment in the UK, its aim is to provide solutions to air quality, water, biodiversity and resource efficiency and waste reduction (UK Parliament, 2022). In the hope to protect changing environment and the human population which depends on healthy natural systems, the political issue of this decade is an ecological one. Global research demonstrates the need to focus on climate change, ecosystem damage, disappearance of wildlife and depletion of natural resources. It is predicted that seventy per cent of global population are to inhabit urban cities therefore increasing pressures on the housing market and the infinite natural resources (Juniper et al. 2019). The local authorities in the UK now require new developments to include ecological enhancements on site post development (Ministry of Housing, Communities and Local Government, 2019) however as small-scale developments, especially in-fill developments, are set to utilise limited space of land and ecological enhancements such as traditional tree, hedge and meadow planting is challenging. 

Over the recent years, vertical farming has made a positive impact on a global scale and could be the answer to meet the demands of growing population and unsustainable traditional farming.  Benke and Tomkins, (2017) emphasized that urban vertical farming comprises countless consumption of technology and automation for land-use optimization therefore advancing in food production for the growing population in land scarce areas. Vertical ecological enhancements are also on the market today, especially in urban areas and are implemented as living walls which are installed on walls of the buildings. Riley (2017) reports that to establish productive living walls requires to encounter challenges such as appropriate support structure, maintaining water levels, oxygen, soil nutrients and pH, selection of plants to accommodate the seasonal climatic changes and establishing the appropriate lighting settings, in addition, the superior challenges are affordability, sustainability and longevity. Cunningham (2021) explored the idea of a Living Pillar which utilises and enhances existing street furniture such as streetlamps in London and introduces the concept of ‘Greening the Grey’ so both humans and wildlife can benefit with use of technology to help monitor and maintain these enhancements in the long term. 

Small Scale Vertical Ecological Enhancement 
One of the solutions is to enhance the existing hard standing infrastructure in the urban setting is to optimize vertical spaces such as building walls and streetlamps to provide nature with food source, place of rest and air pollution relief. McGrath and Scanaill (2014) stated that the number of technical, social and economic drivers are impacting the increasing awareness and implementation of technology such as sensors for environmental and ecological monitoring applications. As the technology expands on a global scale there are opportunities and increasing challenging that arise. 

This report will explore the Living Pillars that Scotscape (2021) is trialing in London, UK and will try to recreate a prototype with appropriate technology (where possible) to assess the challenges that could arise when implementing these innovative structures in the wild. 

The Living PillarTM 
The Living Pillar has a simple concept with a variety of benefits over the traditional hanging baskets that are an unsustainable solution to enhance man made infrastructures and also provide an a solution to where the trees cannot be planted due to lack of space and roots ability to devastate underground pipes. The design is set to provide a long-term solution to keep plants thriving and develop low carbon energy consumption, no water wastage and provision of clean air. 

This report will recreate a part of Living Pillar, due to limited time frame. It will solely focus on provision of water for the plants. Although, it is unknown how much water is needed for the plants to thrive and how local climate conditions would influence the provision of rainwater directly for the plants, irrigation system is relied upon to encourage successful plant establishment. Climate change has been recorded to provide unpredicted weather patterns. 

Prototype Requirements and Hardware Circuit 

Hardware Required 

•	Arduino Board Wifi Rev 2 - Prototyping Shield & mini breadboard was used
•	5V Soil Moisture Sensor – Capacitive Soil Moisture Sensor used 
•	Water Contact Sensor – CQRobot Ocean Water Contact Sensor used
•	Relay – One Channel Relay Module was used
•	5V Water Pump – Micro Mini Submersible Water Pump Used with Clear Vinyl Tubing
•	Cables

Software Required 

•	Arduino IDE (available to download at https://www.arduino.cc) 

Non-Hardware Essentials required 

•	Water Tank – Reusable Water Holder was used
•	External Power - Power Bank was used
•	9 Pocket Hanging Vertical Wall Planter and Plants (none used for demonstration)
•	Cable Ties, Old Plastic Shoe Box, Velcro Stick on Tape Roll

![image](https://user-images.githubusercontent.com/93122551/149191849-55606060-7fff-46f4-89cd-7ab9aa59ec8d.jpeg)

Hardware circuit will start to measure the moisture content of the soil, if the soil moisture drops below a certain threshold, it will activate the pump relay and the water pump will start pumping the water to the soil. If the soil moisture is at a preferred level than the pump relay is not activated, and water pump is not switched on. The water contact sensor is recording if the water tank level is at sufficient level, if it is at insufficient level, it is set to inform the maintenance person that water tank needs topping up. 

Calibrating Capacitive Soil Moisture Sensor 
To activate the water pump, the soil moisture sensor needs to be calibrated according to the values that the soil moisture sensor is capable of recording. 

Exposed to Air is “Value 1” – this is the value boundary value of dry soil “Humidity: 0%RH”

Then the sensor was submerged into a cup of water and the sensor value when the probe was exposed to the water as “Value 2”. This is the boundary value of moist soil “Humidity: 100%RH”.

The final output value is affected the probe insertion depth and how tight the packed around it is. Regard “value_1” as dry soil and “value_2” as soaked soil. This is the sensor detection range. For example: Value_1 = 907; Value_2=731. The range will be divided into three sections: dry soil, enough, waterlogged. Their related values are:

Dry: (907 - 841)
Enough: (840 - 801)
Waterlogged: (800 - 731)

Water Contact Sensor 
For this project CQRobot Ocean Water Contact Sensor was used which recorded if the sensor was in direct contact with the water or not. For more information on the sensor please visit https://www.cqrobot.com/index.php?route=product/product&product_id=1101 

The sensor was inserted into the lower part of the reusable plastic water holder and sealed with clear bathroom sealant and left to dry overnight. When the water level drops below and no longer is in contact with this sensor, an alarm is activated by sending an email to the maintenance team

<img width="456" alt="image" src="https://user-images.githubusercontent.com/93122551/149192064-798bdc13-e212-4d4d-b74b-8c7be0ba20b0.png">

Discussion  
As mentioned earlier in this report, Riley (2017) reported encountered challenges during the establishment of the vertical structures such as supporting structure, maintenance of water levels, soil nutrients and climatic changes. In this section of the report, certain challenges and opportunities will be discussed for this prototype to be deployed in the outdoor. 

Choosing and deploying suitable enclosures 
This prototype used a clear plastic shoe box as an enclosure to place the power bank, Arduino board, relay pump and part of the water contact sensor and temporary sealed with a Velcro Stick on tape for ease of access. Appropriate enclosure for the outdoor monitoring stations will need to be protected from the weather and withstand exposure to water, wind, dust, extreme temperatures and provide maintenance access. Ingress Protection (IP) rating will need to be between 6 and 7/8 according to International Protection Codes (IEC 60529). Water Tank material also needs to withstand exposure to extreme temperatures and not cause any potential health and safety to the public. Further research is required to indicate which material is most sustainable to be used externally. 

Scotscape (2021) has carried out vast research into the streetlamp capability to provide appropriate structural support for the plants and irrigation system by undergoing tests within wind tunnels at certain wind speed. 

Land Ownership 
The Living Pillars trial on Ebury Street, Westminster, London (as seen in Plate 6) have been in place for approximately for 6 years. Westminster Council has granted permission to Scotscape to install the pillars on the existing street furniture and University of Greenwich has been monitoring the data collected from air quality sensor. 
If the prototype is installed on privately owner land, permission is need (if you are not the land owner) from the land owner to avoid trespassing and further trouble. 

Mapping Location 
Each Living Pillar has individual GPS sensor installed to provide its location within a mapping software, is it unknown which mapping software Scotscape is utilizing to store the location of their living pillars however Google Earth and QGIS is open source and can be used to store this data privately. By using the mapping software, it allows to see the current location of the prototype as well as store additional data such as data of installation, what3words, planned maintenance date. In 2021, Scotscape is trialing these Living Pillars in different locations across London and once this idea is incorporated on a larger scale, mapping all the installed pillars in the wild is essential for long-term success. Further information on GPS sensors available at https://create.arduino.cc/projecthub/ruchir1674/how-to-interface-gps-module-neo-6m-with-arduino-8f90ad 

Power Source 
The prototype used a power bank which can provide power up to approximately 20 hours before needing to be recharged. Living Pillar is using solar panels and battery pack to provide power to the sensors and irrigation system which is more sustainable and low carbon option. It must be mentioned that batteries also have a limited lifetime depending of the specification and might need to be replaced after 5 years. As technology advanced the batteries available on the market in the next few years might wipe away this challenge. 

Connectivity 
In this case, WIFI rev 2 board was used to order to connect to the local internet network so the water contact sensor could send an alarm email. It is recommended that option of utilizing LoRa is explored as using sim-card based web connection can be very costly if employed per living pillar. If all the pillars can be connected to main data collection point via LoRa and only one device is connected via sim-card based web connection to send an email to alert low water level in the water tank. This will lower the cost substantially. Further information https://create.arduino.cc/projecthub/xreef/lora-e32-device-for-arduino-esp32-or-esp8266-library-728a86?ref=search&ref_id=lora%20&offset=0 

Social Interaction 
As the human population is set to grow is in important to provide information about the benefits that living pillars bring to the surrounding areas such as air quality improvements, biodiversity and well-being. Creating an interactive app, would be beneficial. Possible ways to interact is to set video cameras within the bird boxes and provide daily/weekly/monthly updates on the species that are using the provided faunal boxes. Reporting a maintenance issue also can be an option for locals via the app. 

Maintenance 
Soil nutrients and pH is a vital component to thriving established vegetation and therefore further sensors are needed to monitor. The plants also need monitoring and replacing is unsuccessful. Maintenance plan is vital for the long-term success. Risk Assessments and Method Statements (RAMS) are required to identify, assess and minimize the risks and hazards involved with deploying such vertical structures in the public space. 
 
Conclusion 
Building this simple prototype has been challenging and many of these can be overcome if more time and resources are available. As Scotscape has a vast client base and the need to innovate their products to make a profit, their resources are much greater as well as their ability to corporate with other researchers. 

To make these prototypes more affordable, sustainable and long-lasting greater research and resources are required.


REFERENCES 
Angus Cunningham (2021). Greening the Grey 25.11.21 Zoom CPD Webinar. Scotscape, London.

Benke, K and Tomkins B (2017). Future food-production systems: vertical farming and controlled
environment agriculture. Sustainability: Science, Practice & Policy. 2017, Vol. 13 Issue 1, p13-26. 

Juniper, T. et al. (2019). The Ecology Book - Foreword. DK Penguin Random House, London.

McGrath, M. and Scanaill, C. N.  (2014). Sensor Technologies. Healthcare, Wellness and Environmental Applications. Apress Open, New York.

Ministry of Housing, Communities and Local Government (2019). National Planning Policy
Framework. Available: https://www.gov.uk/government/publications/national-planning-policy-framework--2 

UK Parliament (2022). Environment Act 2021. Government Bill, London. Available at https://www.legislation.gov.uk/ukpga/2021/30/section/1/enacted (Accessed: 12th January 2022) 



