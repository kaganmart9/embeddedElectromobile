# WPF Firebase Real-Time Data Application

This repository contains a WPF application that retrieves and displays real-time data from a Firebase database. The application is built using C# and the FireSharp library for Firebase integration.

## Features

- Real-time data retrieval from Firebase.
- Display of speed, temperature, current, and wattage.
- Automatic updates every second.

**Install dependencies**: - Ensure you have the FireSharp library installed.

**Configure Firebase**: - Update the `AuthSecret` and `BasePath` in the `FirebaseConnection` class with your Firebase project's details.

## Usage

**Run the application**: - Press `F5` in Visual Studio to build and run the application.

**View real-time data**: - The application will display real-time data retrieved from Firebase, including speed, temperature, current, and wattage.
