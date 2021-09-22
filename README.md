# Arduino_Pins

This repository defines a package gathering software elements allowing to abstract the Arduino
plateform for hardware I/O management.

The package is designed following
[this meta-model](https://github.com/HomeMadeBots/Embedded_Software_Meta_Model) and implemented
according to [these C language
patterns](https://github.com/HomeMadeBots/C-language-patterns-for-Embedded-Software-Meta-Model).

## Content

The Arduino_Pins package gathers :
* Component_Types :
  * Arduino_Discrete_Output_Pin
  * Arduino_Analogic_Input_Pin_5

## Overview

![Overview](http://www.plantuml.com/plantuml/proxy?cache=no&src=https://raw.github.com/HomeMadeBots/Arduino_Pins/master/doc/overview.puml)

## Dependencies

![Packages dependencies](http://www.plantuml.com/plantuml/proxy?cache=no&src=https://raw.github.com/HomeMadeBots/Arduino_Pins/master/doc/dependencies.puml)

The following repository shall be retrieved :
* [Hardware_IO_Interfaces](https://github.com/HomeMadeBots/Hardware_IO_Interfaces)

## Use

### With the Arduino IDE

This repository shall be clone within the _libraries_ folder of the _Arduino sketchbook folder_.