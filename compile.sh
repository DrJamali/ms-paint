#!/bin/bash

gcc -o main.exe main.c .\interface.\*.c .\brain.\*.c .\data.\*.c
.\main.exe
