# Experiment 16 – Exception Handling in C++

**Name:** Varnika Maurya  
**PRN:** 24070123160  

---

##  Objective
To study and implement the concept of **exception handling in C++** using the `try`, `catch`, and `throw` keywords.  
The aim is to handle runtime errors (like division by zero, underage conditions, etc.) gracefully without abnormal termination of the program.

---

##  Theory
In C++, **exception handling** is a mechanism to handle runtime errors or abnormal conditions in a controlled manner.  
It prevents the program from crashing and provides meaningful error messages.  

**Advantages of Exception Handling:**
- Separates error-handling code from normal code.  
- Provides clear handling of different error types.  
- Prevents program crashes due to runtime errors.  

---

##  Program 1 – Division with Exception Handling

###  Algorithm:
1. Start program.  
2. Input two floating-point numbers `n1` and `n2`.  
3. Begin a `try` block.  
   - If `n2 == 0`, throw the value of `n2`.  
   - Else, perform division `ans = n1 / n2` and print result.  
4. Define a `catch(float num)` block.  
   - Display error message: "Division by num not allowed".  
5. End program.  

---

##  Program 2 – Age Validation with Exception Handling

###  Algorithm:
1. Start program.  
2. Input age `n1`.  
3. Begin a `try` block.  
   - If `n1 < 18`, throw the value of `n1`.  
   - Else, display "APPROVED".  
4. Define a `catch(int a)` block.  
   - Display error message: "UNDERAGE!!".  
5. End program.  

---

##  Conclusion
From this experiment, we learned:
- How to use `try`, `catch`, and `throw` in C++.  
- Exception handling ensures **smooth execution** of programs even in abnormal conditions.  
- Errors like division by zero and underage restrictions can be **caught and handled gracefully** without crashing the program.  

---
