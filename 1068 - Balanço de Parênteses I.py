# -*- coding: utf-8 -*-
"""
Created on Sat Mar 18 14:26:38 2023

@author: Victor Hugo Zani
"""

exp = input()
y=0
k=0
pos1=0
pos2= 0
z=0
for x in exp:
    if x == "(":
        y=y+1
        pos1=z
    if x == ")":
        k=k+1
        pos2=z
    z=z+1
        
if k==y and pos1<pos2:
    print ("correct")
else :
    print ("incorrect")
        