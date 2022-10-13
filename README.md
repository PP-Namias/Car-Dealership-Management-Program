# Car-Dealership-Program

In order to be chosen, this program will be offered for the midterm program with two other programs. 

Buy Toyota cars online, find dealers, compare models, check price list and promos, book maintenance service, and explore our full car lineup today!

## Programmer: Jhon Keneth Ryan B. Namias

## Title: Car Dealership

## Course/Section: CS1A North

## Date: October 15, 2022

## Professor: Alban Rei Ryan

## Features

Planned (❌) and currently working (✔) - but not necessarily fully completed - features:


### Admin (Not yet added)

- ❌ Edit Employee Data
- ❌ Edit Cars Data
- ❌ Order logs
- ✔ Order Cars
- ❌ About Me

### Employee (Not yet added)
- ❌ Order logs
- ✔ Order Cars
- ❌ About Me

### Guest (Public)
- ✔ Order Cars
- ❌ About Me

## How to Use
The user must first log in; if they do not already have an account, they can utilize the 'Guest' or public entry option.
Once in the Main, all users may proceed to order Toyota cars.
However, only those with admin level access may view the order logs and edit a car's data. 
Administrators must answer for their conduct. 


## How to Run

### Requirements
- Download and Install MinGW driver
- Then, to compile, double click the "CarDealership.exe"

### Setup
1. Clone the repository or Download and Extract the source code zip file.
2. Open the extracted file and open "CarDealership.exe" 
3. Thats it. 

> Note: Some issues were not yet fixed thus I will be updating this in several upcoming weeks/months. And I hope that this project will be used for educational purposes and that the system itself maintains its copyrights as proposed.

Enjoy :)

![Car-Dealership-Program Demo](images/demo.gif)




﻿# Adequate's SMS
This is our project of building a Student Management System (SMS) *entirely* in C++, which is a part of the CS162 university course. We proudly presents a **simple but fully-functional, error-free and user-friendly** console application to handle operations belonging to the teaching room, such as adding new course, adding/removing students from a course, exporting scoreboards, etc.

<p align="center">
<img src="https://i.ibb.co/Tg7ggrq/intro.png" alt="Intro">
</p>

> Click [here](CS162-FinalProject.pdf) for full list of features.\
[View project planner file](CS162-ProjectPlanner.xlsx).

## Build
The program is built using TDM-GCC Compiler, GCC 5.1.0, MinGW Windows 32-bit edition. All codes are written in C++11.

## Hierachy
We implemented the following structure for the SMS. Each of the objects has its own add, edit, delete and view operations.

<p align="center">
<img src="https://mermaid.ink/svg/eyJjb2RlIjoiZ3JhcGggVERcbiAgICBBKEFjYWRlbWljIHllYXIpIC0tPiBCKFNlbWVzdGVycylcbiAgICBCIC0tPiBDKENvdXJzZXMpXG4gICAgQyAtLT4gRChBdHRlbmRhbmNlIGxpc3QpXG4gICAgQyAtLT4gRShTY29yZWJvYXJkKVxuICAgIEMgLS0-IEYoTGVjdHVyZXJzKVxuICAgIEMgLS0-IEgoU3R1ZGVudHMpXG4gICAgRyhDbGFzcykgLS0-IEgiLCJtZXJtYWlkIjp7InRoZW1lIjoiZGVmYXVsdCJ9LCJ1cGRhdGVFZGl0b3IiOmZhbHNlfQ" alt="Hierachy">
</p>

> You can use the following mermaid script to re-generate the chart.

```
graph TD
    A(Academic year) --> B(Semesters)
    B --> C(Courses)
    C --> D(Attendance list)
    C --> E(Scoreboard)
    C --> F(Lecturers)
    C --> H(Students)
    G(Class) --> H
```

## Classes
<p align="center">
<img src="https://mermaid.ink/svg/eyJjb2RlIjoiY2xhc3NEaWFncmFtXG4gICAgbWFpbiA8fC0tIFNNU1xuXHRTTVMgPHwtLSBjc3ZfaGFuZGxlclxuXHRTTVMgPHwtLSBkYXRlXG4gICAgU01TIDx8LS0gbXVsdGl0eXBlXG4gICAgU01TIDx8LS0gaW50ZXJmYWNlXG5cdGNzdl9oYW5kbGVyIDx8LS0gdGFibGVcbiAgICB0YWJsZSA8fC0tIGxpc3RcbiAgICB0YWJsZSA8fC0tIG11bHRpdHlwZVxuICAgIGludGVyZmFjZSA8fC0tIHRhYmxlXG4gICAgaW50ZXJmYWNlIDx8LS0gbXVsdGl0eXBlXG5cbiAgICBjbGFzcyBtYWlue1xuICAgICAgICB1bmlmaWVzIGFsbCBhbmQgYWRkcyB1c2VyIGFjY291bnQgZnVuY3Rpb25zXG4gICAgICAgICgpOiBjb250cmlidXRlZCBieSBAVGVhbUJhY29ubiwgQHF1eWVuamRcbiAgICB9XG4gICAgY2xhc3MgU01Te1xuICAgICAgICBhIG5hbWVzcGFjZSBjb250YWlucyBhbGwgU01TIG9wZXJhdGlvbnNcbiAgICAgICAgc2VlICdhdHRlbmRhbmNlX2xpc3QuaCcsICdjbGFzcy5oJywgJ2NvdXJzZXMuaCcsICdjc3ZfaW1wb3J0LmgnLCAnbGVjdHVyZXIuaCcsICdzY29yZWJvYXJkLmgnXG4gICAgICAgICgpOiBjb250cmlidXRlZCBieSBAaWx1dnl3LCBAaHV5bmhnaWFkYXQwMzAxMjAwMSwgQHF1eWVuamRcbiAgICB9XG4gICAgY2xhc3MgY3N2X2hhbmRsZXJ7XG4gICAgICAgIGEgY3N2IGZpbGUgcmVhZGVyL3dyaXRlclxuICAgICAgICBzZWUgJ2Nzdi5oJ1xuICAgICAgICAoKTogY29udHJpYnV0ZWQgYnkgQHF1eWVuamRcbiAgICB9XG4gICAgY2xhc3MgdGFibGV7XG4gICAgICAgIGEgdGFibGUgd2l0aCBsaWZlLXNhdmluZyBmdW5jdGlvbnNcbiAgICAgICAgc2VlICdjc3YuaCdcbiAgICAgICAgKCk6IGNvbnRyaWJ1dGVkIGJ5IEBxdXllbmpkXG4gICAgfVxuICAgIGNsYXNzIGxpc3R7XG4gICAgICAgIGEgc2luZ2x5IGxpbmtlZCBsaXN0IHdpdGggdXNlZnVsIGZ1bmN0aW9uc1xuICAgICAgICBzZWUgJ2Nzdi5oJ1xuICAgICAgICAoKTogY29udHJpYnV0ZWQgYnkgQHF1eWVuamRcbiAgICB9XG4gICAgY2xhc3MgbXVsdGl0eXBle1xuICAgICAgICBhIGNsYXNzIHRoYXQgYWNjZXB0cyBhbGwgdmFyaWFibGUgdHlwZXMgYW5kIHByb3ZpZGVzIGxpdGVyYWxseSBldmVyeSB1c2VmdWwgZnVuY3Rpb25cbiAgICAgICAgc2VlICdjc3YuaCdcbiAgICAgICAgKCk6IGNvbnRyaWJ1dGVkIGJ5IEBxdXllbmpkXG4gICAgfVxuICAgIGNsYXNzIGRhdGV7XG4gICAgICAgIGEgY2xhc3MgdGhhdCBwcm92aWRlcyB1c2VmdWwgb3BlcmF0aW9ucyBvbiBkYXRlc1xuICAgICAgICBzZWUgJ2RhdGUuaCdcbiAgICAgICAgKCk6IGNvbnRyaWJ1dGVkIGJ5IEBxdXllbmpkXG4gICAgfVxuICAgIGNsYXNzIGludGVyZmFjZXtcbiAgICAgICAgYSBuYW1lc3BhY2UgY29udGFpbnMgSS9PIG1ldGhvZHMgZm9yIGNvbnNpc3RlbmN5IHB1cnBvc2VzXG4gICAgICAgIHNlZSAnaW50ZXJmYWNlLmgnXG4gICAgICAgICgpOiBjb250cmlidXRlZCBieSBAcXV5ZW5qZFxuICAgIH1cblx0XHRcdFx0XHQiLCJtZXJtYWlkIjp7InRoZW1lIjoiZGVmYXVsdCJ9fQ" alt="Class diagram">
</p>

> You can use the following mermaid script to re-generate the chart.

```
classDiagram
    main <|-- SMS
    SMS <|-- csv_handler
    SMS <|-- date
    SMS <|-- multitype
    SMS <|-- interface
    csv_handler <|-- table
    table <|-- list
    table <|-- multitype
    interface <|-- table
    interface <|-- multitype

    class main{
        unifies all and adds user account functions
        (): contributed by @TeamBaconn, @quyenjd
    }
    class SMS{
        a namespace contains all SMS operations
        see 'attendance_list.h', 'class.h', 'courses.h', 'csv_import.h', 'lecturer.h', 'scoreboard.h'
        (): contributed by @iluvyw, @huynhgiadat03012001, @quyenjd
    }
    class csv_handler{
        a csv file reader/writer
        see 'csv.h'
        (): contributed by @quyenjd
    }
    class table{
        a table with life-saving functions
        see 'csv.h'
        (): contributed by @quyenjd
    }
    class list{
        a singly linked list with useful functions
        see 'csv.h'
        (): contributed by @quyenjd
    }
    class multitype{
        a class that accepts all variable types and provides literally every useful function
        see 'csv.h'
        (): contributed by @quyenjd
    }
    class date{
        a class that provides useful operations on dates
        see 'date.h'
        (): contributed by @quyenjd
    }
    class interface{
        a namespace contains I/O methods for consistency purposes
        see 'interface.h'
        (): contributed by @quyenjd
    }				
```

## Mentors
- Dr. Dinh Ba Tien
- M.S. Truong Phuoc Loc
- M.S. Ho Tuan Thanh
- M.S. Do Nguyen Kha

## License
All rights reserved.\
`csv.h` is under Apache License 2.0. [Read more](LICENSE).