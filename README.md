# Qt-Creator-CarDashboardUI

## About this project
There is a growing interest about home/office/car assistants and dashboard apps. Recently, Google Home Hub and Amazon Echo Show hit the market, and they provide a brief information on their screen including the current time, temperature, weather, as well as traffic condition, etc.

In this development, I build a multi-functional dashboard application for home, office, or car use.

This app is large enough to cover entire screen, just like a screen saver. The following table shows the list of possible functionalities:
###### Digital Clock: 
-  show the current time, updating every second
-  a welcome message + random encouragements or jokes
######  World Clock (use QTimeZone to convert between time zones) 
-  show the current time in a different time zone:
-  Time zone choice at your call --- specify a city or name of the time zone
######  Current Weather Information:
-  show temperature, humidity, and picture description of the current weather
-  show a picture depending on the current weather condition code
-  using https://openweathermap.org/weather-conditions web api
-  accompanied by a text input box for different zip codes
###### Map with the Current Traffic Information:
-  using bing map api
-  same text input box to the one of weather information
###### Digital photo frame:
-   shows 5 or more photos’ slide show
-   change the photo every 10 seconds
######  To-Do List (use TableView and csv file)
-    Reads a task list from a file at the beginning of execution

## Built with
- Window-Qt-Creator_5.12.0
- C++

## Here are the preview pictures:
![Screenshot (169)](https://user-images.githubusercontent.com/85131332/121969227-ad036980-cd28-11eb-8575-c2c5b6944725.png)

## Full Application Demo:
https://youtu.be/LcKd4wh_erA
