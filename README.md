# 🧮 Factorial Calculator in C++

This is a simple **C++ program** that calculates the factorial of a given number. The program demonstrates the use of basic **input/output operations**, **loops**, and **conditional statements** in C++.

---

## 💻 Features  
1. **User Input**:  
   - The program prompts the user to enter a number (`a`).
  
2. **Factorial Calculation**:  
   - It calculates the factorial of the input number using a `for` loop.

3. **Output**:  
   - Displays the factorial of the number.
   - Shows the memory address of the factorial variable using `&faktorial`.

4. **Error Handling**:  
   - If the user enters a negative number, the program outputs an error message stating that the factorial is undefined for negative numbers.

---

## 📸 Screenshot of the Code
![Factorial Code Screenshot](https://github.com/spyware-v2/Faktorial/blob/main/code%20ss.png)

## To copy the code, click this link: [💾 Download Faktorial.cpp](https://github.com/spyware-v2/Faktorial/blob/main/Faktorial.cpp)

---

## 🚀 How It Works  
1. **Input Section**:  
   - The user is prompted to input a number (`a`) for which the factorial will be calculated.
   
2. **Calculation**:  
   - The program calculates the factorial of the number using the formula:
     ```
     factorial = 1
     for (int i = 1; i <= a; i++) {
         factorial *= i;
     }
     ```
3. **Result Display**:  
   - The program displays the factorial of the number and the memory address of the `faktorial` variable.
   - If a negative number is input, the program shows an error message:  
     `Faktorial tidak di definisikan untuk bilangan negativ!`

---

## 📋 Example Output  
```plaintext
Masukkan angka : 5
Faktorial dari 5 adalah = 120
Alamat memori dari "120" adalah = 0x7ffd8b78b930
