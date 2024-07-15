# PrintEasy Sales System

This is a simple console-based sales system written in C++. The system allows for adding, displaying, and calculating sales records for salespersons. It also includes functionality to clear the records and exit the application.

## Features

- **Add Record**: Add a new salesperson's record with their first name, second name, and sales amount.
- **Display Records**: Display all salesperson records.
- **Display Total Sales**: Show the total sales amount of all salespersons.
- **Display Average Sales**: Show the average sales amount of all salespersons.
- **Clear Data**: Clear all salesperson records.
- **Exit**: Exit the application.

## Getting Started

### Prerequisites

- C++ compiler
- Text editor or IDE for C++ development

## Code Overview

The program consists of several functions, each responsible for a specific task. Below is an overview of each function:

### `main`

- Displays the main menu and handles user input for selecting various options.
- Calls other functions based on user input.

### `mainmenu`

- Displays the main menu options.

### `addrecord`

- Prompts the user to enter the salesperson's first name, second name, and sales amount.
- Writes the entered information to the `sales.txt` file.

### `displayrecord`

- Reads and displays all records from the `sales.txt` file.

### `salescalculation`

- Calculates the total and average sales from the `sales.txt` file.
- Writes the calculated total and average sales to the `total.txt` file.

### `displaytotal`

- Reads and displays the total sales from the `total.txt` file.

### `displayaverage`

- Reads and displays the average sales from the `total.txt` file.

### `clear`

- Clears all records from the `sales.txt` and `total.txt` files.

## Usage

1. Run the program.
2. Select an option from the main menu:
   - **Add Record**: Enter details for a new salesperson.
   - **Display Records**: View all salesperson records.
   - **Display Total Sales**: View the total sales amount.
   - **Display Average Sales**: View the average sales amount.
   - **Clear Data**: Clear all salesperson records.
   - **Exit**: Exit the application.

## Example

Here is an example of how the program works:

1. **Add Record**
   ```
   Enter the salesperson's First Name : John
   Enter the salesperson's Second Name : Doe
   Enter the sales amount : 1000.50
   Do you want to continue ? Y or y to continue : n
   ```

2. **Display Records**
   ```
   First Name      Second Name      Sales Amount
        John             Doe         1000.50
   ```

3. **Display Total Sales**
   ```
   The total sales is RM 1000.50
   ```

4. **Display Average Sales**
   ```
   The average sales is RM 1000.50
   ```

5. **Clear Data**
   ```
   Data successfully cleared !
   ```
