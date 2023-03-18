# -*- coding: utf-8 -*-
"""
Created on Sat Mar 18 15:08:45 2023

@author: Victor Hugo Zani
"""
k=0

test = input()
float(test)
for x in test:
    line1=input()
    line1= line1.split()
    valor=float(line1[0])
    produt=int(line1[1])
    line2=input()
    line2= line2.split()


    for y in  range(produt):
        troco = valor %  float(line2[k])

        if k == 0:
            max = troco
        else:
            if max < troco:
             max = troco
        k=k+1
    print(max)

        

