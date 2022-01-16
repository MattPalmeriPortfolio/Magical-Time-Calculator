# Magical-Time-Calculator

Contents
---------------------
* File Contents
* Introduction
* Algorithm
* Requirements

## File Contents
	
	Magical_Time_Calculator.cpp (program file containing code)

## Introduction
Book practice project from Problem Solving With C++ Chapter 4. Project 7.
Your time machine only works in minutes - but you don't know how to use a 24 hour clock! This program to finds the number of minutes between your start time and end time, so you can travel as much as you want!
Written using Microsoft Visual Studio. 

## Algorithm

		1. receive input of present time
			1a. store in four variables: one for hours, one for minutes, two for AM or PM
				1aa. the M is not necessary for any comparisons, but for user input to be more readable and to prevent unintentional overflow
		2. receive input of future time, using above model
		3. calculate the length between the times, in minutes
			3a. for times in PM:
				3aa. difference between time is calculated by, except for 12PM, adding 12 to the value for pm
				3ab. therefore, must check whether the time in PM is less than 12, and if so, add 12 to it.
				3ac. after, convert time to minutes by multiplying by 60.
			3b. for times in AM:
				3ba. multiply by 60 to convert to minutes, if less than 12.
				3bb. else, change value to 24, and multiply by 60.
			3c. afterwards, add the minutes variables to the converted hours.
			3d. if start time < end time, subtract start time from end time and output the result.
			3e. if start time > end time, add 1440 minutes (24 hours) to end time, and then subtract start time from end time, then output the result.
		4. output the # of minutes the person should enter into their time machine.

## Requirements
No requirements or modules needed for running this program. 
